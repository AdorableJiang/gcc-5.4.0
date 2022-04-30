# gcc-5

Build gcc-5 on `Ubuntu 20.04` with `gcc-9`. Problems listed [here](https://blog.csdn.net/tuibianhuaisheng/article/details/115399019) are fixed and tested.

## Usage

```bash
git clone https://github.com/AdorableJiang/gcc-5.4.0.git
cd gcc-5.4.0
./contrib/download_prerequisites
mkdir gcc-build-5.4.0
cd gcc-build-5.4.0
../configure --prefix=/usr/local --enable-checking=release --enable-languages=c,c++ --disable-multilib
```

For explanation of `gcc-5.4.0/configure` options, check section `Options specification` of [Installing GCC: Configuration](https://gcc.gnu.org/install/configure.html).

Now you are all set to build `gcc-5`. Set `$nproc` to (at maximum) the number of threads your CPU support for faster building. E.g. on a CPU support 16 threads, use `make -j16`.

```bash
make -j$nproc
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
