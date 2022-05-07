# gcc-5

Build gcc-5 on `Ubuntu 20.04` with `gcc-9`. Problems listed [here](https://blog.csdn.net/tuibianhuaisheng/article/details/115399019) are fixed and tested. 

## Prerequest

Make sure `gcc-9` is installed on your distro. `gcc` other than version 9 and 11 are NOT tested.

`gcc-11` is tested to be too new to build `gcc-5` as discussed [here](https://github.com/Freetz-NG/freetz-ng/discussions/396#discussioncomment-1525316). In practical, an error would be thrown:

```bash
use of an operand of type ‘bool’ in ‘operator++’ is forbidden in C++17
```

## Usage

```bash
git clone https://github.com/AdorableJiang/gcc-5.4.0.git
cd gcc-5.4.0
./contrib/download_prerequisites
mkdir gcc-build-5.4.0
cd gcc-build-5.4.0
CC=[/path/to/gcc-9] CXX=[/path/to/g++-9] ../configure --prefix=/usr/local --enable-checking=release --enable-languages=c,c++ --disable-multilib
```

For explanation of `gcc-5.4.0/configure` options, check section `Options specification` of [Installing GCC: Configuration](https://gcc.gnu.org/install/configure.html).

Now you are all set to build `gcc-5`.

```bash
make -j$(nproc)
sudo make install
```

## Validation

The built `gcc-5` binaries should be installed to `--prefix/gcc-5.4.0/bin`,

```bash
$/usr/local/gcc-5.4.0/bin/gcc --version
gcc (GCC) 5.4.0
Copyright © 2015 Free Software Foundation, Inc.
```

and for g++

```bash
$/usr/local/gcc-5.4.0/bin/g++ --version
g++ (GCC) 5.4.0
Copyright © 2015 Free Software Foundation, Inc.
```

If you encountered problems using this repo, check [here](https://blog.csdn.net/tuibianhuaisheng/article/details/115399019) or cached offline `reference/ubuntu_install_gcc5.4.html` for help.
