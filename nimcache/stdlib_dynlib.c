/* Generated by Nim Compiler v0.17.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   C:\nim\dist\mingw64\bin\gcc.exe -c  -w -O3 -fno-strict-aliasing  -IC:\nim\lib -o C:\Users\Arham\Documents\Projects\simtest\nimcache\stdlib_dynlib.o C:\Users\Arham\Documents\Projects\simtest\nimcache\stdlib_dynlib.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <windows.h>
#undef linux
#undef near
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};

N_NIMCALL(void*, loadLib_lSvQvOASnMsmHZsCRL59ctQ)(NimStringDesc* path, NIM_BOOL global_symbols) {
	void* result;
	HINSTANCE T1_;
	result = (void*)0;
	T1_ = (HINSTANCE)0;
	T1_ = LoadLibraryA(path->data);
	result = ((void*) (T1_));
	return result;
}

N_NIMCALL(void*, symAddr_NHfjIU1Uh0ju9azgMjiSkQA)(void* lib, NCSTRING name) {
	void* result;
	result = (void*)0;
	result = GetProcAddress(((HINSTANCE) (lib)), name);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_dynlibInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_dynlibDatInit000)(void) {
}

