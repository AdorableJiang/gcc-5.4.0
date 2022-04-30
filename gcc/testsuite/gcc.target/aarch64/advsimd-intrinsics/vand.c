#define INSN_NAME vand
#define TEST_MSG "VAND/VANDQ"

#include "binary_op.inc"

/* Expected results.  */
VECT_VAR_DECL(expected,int,8,8) [] = { 0x0, 0x0, 0x2, 0x2,
				       0x0, 0x0, 0x2, 0x2 };
VECT_VAR_DECL(expected,int,16,4) [] = { 0xfff0, 0xfff0, 0xfff0, 0xfff0 };
VECT_VAR_DECL(expected,int,32,2) [] = { 0x0, 0x1 };
VECT_VAR_DECL(expected,int,64,1) [] = { 0x60 };
VECT_VAR_DECL(expected,uint,8,8) [] = { 0x10, 0x10, 0x10, 0x10,
					0x14, 0x14, 0x14, 0x14 };
VECT_VAR_DECL(expected,uint,16,4) [] = { 0x10, 0x10, 0x12, 0x12 };
VECT_VAR_DECL(expected,uint,32,2) [] = { 0x20, 0x20 };
VECT_VAR_DECL(expected,uint,64,1) [] = { 0x0 };
VECT_VAR_DECL(expected,poly,8,8) [] = { 0x33, 0x33, 0x33, 0x33,
					0x33, 0x33, 0x33, 0x33 };
VECT_VAR_DECL(expected,poly,16,4) [] = { 0x3333, 0x3333, 0x3333, 0x3333 };
VECT_VAR_DECL(expected,hfloat,32,2) [] = { 0x33333333, 0x33333333 };
VECT_VAR_DECL(expected,int,8,16) [] = { 0xf0, 0xf0, 0xf2, 0xf2,
					0xf4, 0xf4, 0xf6, 0xf6,
					0xf0, 0xf0, 0xf2, 0xf2,
					0xf4, 0xf4, 0xf6, 0xf6 };
VECT_VAR_DECL(expected,int,16,8) [] = { 0xffe0, 0xffe0, 0xffe0, 0xffe0,
					0xffe4, 0xffe4, 0xffe4, 0xffe4 };
VECT_VAR_DECL(expected,int,32,4) [] = { 0xffffffe0, 0xffffffe0,
					0xffffffe2, 0xffffffe2 };
VECT_VAR_DECL(expected,int,64,2) [] = { 0x10, 0x10 };
VECT_VAR_DECL(expected,uint,8,16) [] = { 0x0, 0x0, 0x0, 0x0,
					 0x4, 0x4, 0x4, 0x4,
					 0x8, 0x8, 0x8, 0x8,
					 0xc, 0xc, 0xc, 0xc };
VECT_VAR_DECL(expected,uint,16,8) [] = { 0x0, 0x1, 0x2, 0x3,
					 0x0, 0x1, 0x2, 0x3 };
VECT_VAR_DECL(expected,uint,32,4) [] = { 0x30, 0x31, 0x32, 0x33 };
VECT_VAR_DECL(expected,uint,64,2) [] = { 0x0, 0x1 };
VECT_VAR_DECL(expected,poly,8,16) [] = { 0x33, 0x33, 0x33, 0x33,
					 0x33, 0x33, 0x33, 0x33,
					 0x33, 0x33, 0x33, 0x33,
					 0x33, 0x33, 0x33, 0x33 };
VECT_VAR_DECL(expected,poly,16,8) [] = { 0x3333, 0x3333, 0x3333, 0x3333,
					 0x3333, 0x3333, 0x3333, 0x3333 };
VECT_VAR_DECL(expected,hfloat,32,4) [] = { 0x33333333, 0x33333333,
					   0x33333333, 0x33333333 };