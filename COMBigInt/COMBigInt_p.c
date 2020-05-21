

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Thu May 21 10:48:45 2020
 */
/* Compiler settings for .\COMBigInt.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#if !defined(_M_IA64) && !defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */
#pragma warning( disable: 4211 )  /* redefine extent to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 440
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif // __RPCPROXY_H_VERSION__


#include "COMBigInt.h"

#define TYPE_FORMAT_STRING_SIZE   7                                 
#define PROC_FORMAT_STRING_SIZE   141                               
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } MIDL_TYPE_FORMAT_STRING;

typedef struct _MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } MIDL_PROC_FORMAT_STRING;


static RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString;
extern const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAddition_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAddition_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IMultiplication_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IMultiplication_ProxyInfo;



#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT40_OR_LATER)
#error You need a Windows NT 4.0 or later to run this stub because it uses these features:
#error   -Oif or -Oicf.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will die there with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure get__operand_A */


	/* Procedure get__operand_A */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
/*  8 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x24 ),	/* 36 */
/* 14 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 16 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 18 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 20 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 22 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 24 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 26 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put__operand_A */


	/* Procedure put__operand_A */

/* 28 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 30 */	NdrFcLong( 0x0 ),	/* 0 */
/* 34 */	NdrFcShort( 0x8 ),	/* 8 */
/* 36 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 38 */	NdrFcShort( 0x8 ),	/* 8 */
/* 40 */	NdrFcShort( 0x8 ),	/* 8 */
/* 42 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter newVal */


	/* Parameter newVal */

/* 44 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 46 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 48 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 50 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 52 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 54 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get__operand_B */


	/* Procedure get__operand_B */

/* 56 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 58 */	NdrFcLong( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0x9 ),	/* 9 */
/* 64 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x24 ),	/* 36 */
/* 70 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 72 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 74 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 76 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 78 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 80 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 82 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put__operand_B */


	/* Procedure put__operand_B */

/* 84 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 86 */	NdrFcLong( 0x0 ),	/* 0 */
/* 90 */	NdrFcShort( 0xa ),	/* 10 */
/* 92 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 94 */	NdrFcShort( 0x8 ),	/* 8 */
/* 96 */	NdrFcShort( 0x8 ),	/* 8 */
/* 98 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter newVal */


	/* Parameter newVal */

/* 100 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 102 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 104 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 106 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 108 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 110 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Calculate */


	/* Procedure Calculate */

/* 112 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 114 */	NdrFcLong( 0x0 ),	/* 0 */
/* 118 */	NdrFcShort( 0xb ),	/* 11 */
/* 120 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 124 */	NdrFcShort( 0x24 ),	/* 36 */
/* 126 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter _result */


	/* Parameter _result */

/* 128 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 130 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 132 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 134 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 136 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 138 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/*  4 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */

			0x0
        }
    };


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IAddition, ver. 0.0,
   GUID={0x8FF4F805,0x2838,0x4086,{0x8C,0x90,0xE8,0x79,0xBC,0x9F,0xCD,0x28}} */

#pragma code_seg(".orpc")
static const unsigned short IAddition_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    28,
    56,
    84,
    112
    };

static const MIDL_STUBLESS_PROXY_INFO IAddition_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IAddition_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAddition_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IAddition_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) _IAdditionProxyVtbl = 
{
    &IAddition_ProxyInfo,
    &IID_IAddition,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IAddition::get__operand_A */ ,
    (void *) (INT_PTR) -1 /* IAddition::put__operand_A */ ,
    (void *) (INT_PTR) -1 /* IAddition::get__operand_B */ ,
    (void *) (INT_PTR) -1 /* IAddition::put__operand_B */ ,
    (void *) (INT_PTR) -1 /* IAddition::Calculate */
};


static const PRPC_STUB_FUNCTION IAddition_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IAdditionStubVtbl =
{
    &IID_IAddition,
    &IAddition_ServerInfo,
    12,
    &IAddition_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IMultiplication, ver. 0.0,
   GUID={0x4D8093DC,0xCE8A,0x49ED,{0xB2,0x45,0xEF,0x66,0x11,0x1F,0x1A,0x2E}} */

#pragma code_seg(".orpc")
static const unsigned short IMultiplication_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    28,
    56,
    84,
    112
    };

static const MIDL_STUBLESS_PROXY_INFO IMultiplication_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IMultiplication_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IMultiplication_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IMultiplication_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) _IMultiplicationProxyVtbl = 
{
    &IMultiplication_ProxyInfo,
    &IID_IMultiplication,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IMultiplication::get__operand_A */ ,
    (void *) (INT_PTR) -1 /* IMultiplication::put__operand_A */ ,
    (void *) (INT_PTR) -1 /* IMultiplication::get__operand_B */ ,
    (void *) (INT_PTR) -1 /* IMultiplication::put__operand_B */ ,
    (void *) (INT_PTR) -1 /* IMultiplication::Calculate */
};


static const PRPC_STUB_FUNCTION IMultiplication_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IMultiplicationStubVtbl =
{
    &IID_IMultiplication,
    &IMultiplication_ServerInfo,
    12,
    &IMultiplication_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    __MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x20000, /* Ndr library version */
    0,
    0x600016e, /* MIDL Version 6.0.366 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0   /* Reserved5 */
    };

const CInterfaceProxyVtbl * _COMBigInt_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IAdditionProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IMultiplicationProxyVtbl,
    0
};

const CInterfaceStubVtbl * _COMBigInt_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IAdditionStubVtbl,
    ( CInterfaceStubVtbl *) &_IMultiplicationStubVtbl,
    0
};

PCInterfaceName const _COMBigInt_InterfaceNamesList[] = 
{
    "IAddition",
    "IMultiplication",
    0
};

const IID *  _COMBigInt_BaseIIDList[] = 
{
    &IID_IDispatch,
    &IID_IDispatch,
    0
};


#define _COMBigInt_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _COMBigInt, pIID, n)

int __stdcall _COMBigInt_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _COMBigInt, 2, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _COMBigInt, 2, *pIndex )
    
}

const ExtendedProxyFileInfo COMBigInt_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _COMBigInt_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _COMBigInt_StubVtblList,
    (const PCInterfaceName * ) & _COMBigInt_InterfaceNamesList,
    (const IID ** ) & _COMBigInt_BaseIIDList,
    & _COMBigInt_IID_Lookup, 
    2,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64)*/

