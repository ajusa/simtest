/* Generated by Nim Compiler v0.17.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   C:\nim\dist\mingw64\bin\gcc.exe -c  -w -O3 -fno-strict-aliasing  -IC:\nim\lib -o C:\Users\Arham\Documents\Projects\simtest\nimcache\stdlib_strutils.o C:\Users\Arham\Documents\Projects\simtest\nimcache\stdlib_strutils.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#undef linux
#undef near
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct ValueError_Gi06FkNeykJn7mrqRZYrkA ValueError_Gi06FkNeykJn7mrqRZYrkA;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Cell_1zcF9cV8XIAtbN8h5HRUB8g Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct CellSeq_Axo1XVm9aaQueTOldv8le5w CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct GcHeap_1TRH1TZMaVZTnLNcIHuNFQ GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct GcStack_7fytPA5bBsob6See21YMRA GcStack_7fytPA5bBsob6See21YMRA;
typedef struct MemRegion_x81NhDv59b8ercDZ9bi85jyg MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct SmallChunk_tXn60W2f8h3jgAYdEmy5NQ SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct LLChunk_XsENErzHIZV9bhvyJx56wGw LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct BigChunk_Rv9c70Uhp2TytkX7eH78qEg BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct IntSet_EZObFrE3NC9bIb3YMkY9crZA IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct Trunk_W0r8S0Y3UGke6T9bIUWnnuw Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct AvlNode_IaqjtwKhxLEpvDS9bct9blEw AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct TY_ujsjpB2O9cjj3uDHsXbnSzg TY_ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct GcStat_0RwLoVBHZPfUAcLczmfQAg GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct CellSet_jG87P0AI9aZtss9ccTYBIISQ CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct PageDesc_fublkgIY4LG3mT51LU2WHg PageDesc_fublkgIY4LG3mT51LU2WHg;
typedef struct BaseChunk_Sdq7WpT6qAH858F5ZEdG3w BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct FreeCell_u6M5LHprqzkn9axr04yg9bGQ FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ_Set;
typedef N_NIMCALL_PTR(void, TY_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct  TNimType  {
NI size;
TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ_Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY_ojoeKfW4VYIm36I9cpDTQIg marker;
TY_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct  ValueError_Gi06FkNeykJn7mrqRZYrkA  {
  Exception Sup;
};
typedef NU8 TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct  TNimNode  {
TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Cell_1zcF9cV8XIAtbN8h5HRUB8g  {
NI refcount;
TNimType* typ;
};
struct  GcStack_7fytPA5bBsob6See21YMRA  {
void* bottom;
};
struct  CellSeq_Axo1XVm9aaQueTOldv8le5w  {
NI len;
NI cap;
Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* TY_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef Trunk_W0r8S0Y3UGke6T9bIUWnnuw* TY_lh2A89ahMmYg9bCmpVaplLbA[256];
struct  IntSet_EZObFrE3NC9bIb3YMkY9crZA  {
TY_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef AvlNode_IaqjtwKhxLEpvDS9bct9blEw* TY_0aOLqZchNi8nWtMTi8ND8w[2];
struct  AvlNode_IaqjtwKhxLEpvDS9bct9blEw  {
TY_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct TY_ujsjpB2O9cjj3uDHsXbnSzg {
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef TY_ujsjpB2O9cjj3uDHsXbnSzg TY_LzOv2eCDGiceMKQstCLmhw[30];
struct  HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg  {
NI len;
TY_LzOv2eCDGiceMKQstCLmhw chunks;
HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct  MemRegion_x81NhDv59b8ercDZ9bi85jyg  {
NI minLargeObj;
NI maxLargeObj;
TY_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI lastSize;
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* freeChunksList;
IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct  GcStat_0RwLoVBHZPfUAcLczmfQAg  {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct  CellSet_jG87P0AI9aZtss9ccTYBIISQ  {
NI counter;
NI max;
PageDesc_fublkgIY4LG3mT51LU2WHg* head;
PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct  GcHeap_1TRH1TZMaVZTnLNcIHuNFQ  {
GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
};
struct  BaseChunk_Sdq7WpT6qAH858F5ZEdG3w  {
NI prevSize;
NI size;
};
struct  SmallChunk_tXn60W2f8h3jgAYdEmy5NQ  {
  BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* next;
SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* prev;
FreeCell_u6M5LHprqzkn9axr04yg9bGQ* freeList;
NI free;
NI acc;
NF data;
};
struct  LLChunk_XsENErzHIZV9bhvyJx56wGw  {
NI size;
NI acc;
LLChunk_XsENErzHIZV9bhvyJx56wGw* next;
};
struct  BigChunk_Rv9c70Uhp2TytkX7eH78qEg  {
  BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* next;
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* prev;
NF data;
};
typedef NI TY_9a8QARi5WsUggNU9bom7kzTQ[8];
struct  Trunk_W0r8S0Y3UGke6T9bIUWnnuw  {
Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;
NI key;
TY_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct  PageDesc_fublkgIY4LG3mT51LU2WHg  {
PageDesc_fublkgIY4LG3mT51LU2WHg* next;
NI key;
TY_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct  FreeCell_u6M5LHprqzkn9axr04yg9bGQ  {
FreeCell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zeroField;
};
N_NIMCALL(NI, npuParseInt)(NimStringDesc* s, NI* number, NI start);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(CellSeq_Axo1XVm9aaQueTOldv8le5w* s, Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
extern TNimType NTI_yCEN9anxCD6mzBxGjuaRBdg_;
extern TNimType NTI_Gi06FkNeykJn7mrqRZYrkA_;
extern GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
STRING_LITERAL(TM_JGc9b9bh2D3nTdUR7TGyq8aA_2, "invalid integer: ", 17);

static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	copyMem_E1xtACub5WcDa3vbrIXbwgsystem(((void*) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	result = (Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result = ((Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
		if (!!((src == NIM_NIL))) goto LA3_;
		c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		(*c).refcount += ((NI) 8);
	}
	LA3_: ;
	{
		Cell_1zcF9cV8XIAtbN8h5HRUB8g* c_2;
		if (!!(((*dest) == NIM_NIL))) goto LA7_;
		c_2 = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		{
			(*c_2).refcount -= ((NI) 8);
			if (!((NU64)((*c_2).refcount) < (NU64)(((NI) 8)))) goto LA11_;
			rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c_2);
		}
		LA11_: ;
	}
	LA7_: ;
	(*dest) = src;
}

static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
}

static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		Cell_1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		incRef_9cAA5YuQAAC3MVbnGeV86swsystem(T5_);
	}
	LA3_: ;
	{
		Cell_1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		decRef_MV4BBk6J1qu70IbBxwEn4wsystem(T10_);
	}
	LA8_: ;
	(*dest) = src;
}

N_NIMCALL(NI, nsuParseInt)(NimStringDesc* s) {
	NI result;
	NI L;
	result = (NI)0;
	L = npuParseInt(s, (&result), ((NI) 0));
	{
		NIM_BOOL T3_;
		ValueError_Gi06FkNeykJn7mrqRZYrkA* e;
		NimStringDesc* T7_;
		T3_ = (NIM_BOOL)0;
		T3_ = !((L == (s ? s->Sup.len : 0)));
		if (T3_) goto LA4_;
		T3_ = (L == ((NI) 0));
		LA4_: ;
		if (!T3_) goto LA5_;
		e = (ValueError_Gi06FkNeykJn7mrqRZYrkA*)0;
		e = (ValueError_Gi06FkNeykJn7mrqRZYrkA*) newObj((&NTI_yCEN9anxCD6mzBxGjuaRBdg_), sizeof(ValueError_Gi06FkNeykJn7mrqRZYrkA));
		(*e).Sup.Sup.m_type = (&NTI_Gi06FkNeykJn7mrqRZYrkA_);
		T7_ = (NimStringDesc*)0;
		T7_ = rawNewString(s->Sup.len + 17);
appendString(T7_, ((NimStringDesc*) &TM_JGc9b9bh2D3nTdUR7TGyq8aA_2));
appendString(T7_, s);
		asgnRefNoCycle((void**) (&(*e).Sup.message), T7_);
		asgnRef((void**) (&(*e).Sup.parent), NIM_NIL);
		raiseException((Exception*)e, "ValueError");
	}
	LA5_: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_strutilsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_strutilsDatInit000)(void) {
}

