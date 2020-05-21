

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __COMBigInt_h__
#define __COMBigInt_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IAddition_FWD_DEFINED__
#define __IAddition_FWD_DEFINED__
typedef interface IAddition IAddition;
#endif 	/* __IAddition_FWD_DEFINED__ */


#ifndef __IMultiplication_FWD_DEFINED__
#define __IMultiplication_FWD_DEFINED__
typedef interface IMultiplication IMultiplication;
#endif 	/* __IMultiplication_FWD_DEFINED__ */


#ifndef __Addition_FWD_DEFINED__
#define __Addition_FWD_DEFINED__

#ifdef __cplusplus
typedef class Addition Addition;
#else
typedef struct Addition Addition;
#endif /* __cplusplus */

#endif 	/* __Addition_FWD_DEFINED__ */


#ifndef __Multiplication_FWD_DEFINED__
#define __Multiplication_FWD_DEFINED__

#ifdef __cplusplus
typedef class Multiplication Multiplication;
#else
typedef struct Multiplication Multiplication;
#endif /* __cplusplus */

#endif 	/* __Multiplication_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

#ifndef __IAddition_INTERFACE_DEFINED__
#define __IAddition_INTERFACE_DEFINED__

/* interface IAddition */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IAddition;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8FF4F805-2838-4086-8C90-E879BC9FCD28")
    IAddition : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__operand_A( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put__operand_A( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__operand_B( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put__operand_B( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Calculate( 
            /* [retval][out] */ LONG *_result) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAdditionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAddition * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAddition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAddition * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAddition * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAddition * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAddition * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAddition * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__operand_A )( 
            IAddition * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put__operand_A )( 
            IAddition * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__operand_B )( 
            IAddition * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put__operand_B )( 
            IAddition * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Calculate )( 
            IAddition * This,
            /* [retval][out] */ LONG *_result);
        
        END_INTERFACE
    } IAdditionVtbl;

    interface IAddition
    {
        CONST_VTBL struct IAdditionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAddition_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAddition_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAddition_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAddition_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAddition_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAddition_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAddition_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAddition_get__operand_A(This,pVal)	\
    (This)->lpVtbl -> get__operand_A(This,pVal)

#define IAddition_put__operand_A(This,newVal)	\
    (This)->lpVtbl -> put__operand_A(This,newVal)

#define IAddition_get__operand_B(This,pVal)	\
    (This)->lpVtbl -> get__operand_B(This,pVal)

#define IAddition_put__operand_B(This,newVal)	\
    (This)->lpVtbl -> put__operand_B(This,newVal)

#define IAddition_Calculate(This,_result)	\
    (This)->lpVtbl -> Calculate(This,_result)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAddition_get__operand_A_Proxy( 
    IAddition * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB IAddition_get__operand_A_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAddition_put__operand_A_Proxy( 
    IAddition * This,
    /* [in] */ LONG newVal);


void __RPC_STUB IAddition_put__operand_A_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAddition_get__operand_B_Proxy( 
    IAddition * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB IAddition_get__operand_B_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAddition_put__operand_B_Proxy( 
    IAddition * This,
    /* [in] */ LONG newVal);


void __RPC_STUB IAddition_put__operand_B_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAddition_Calculate_Proxy( 
    IAddition * This,
    /* [retval][out] */ LONG *_result);


void __RPC_STUB IAddition_Calculate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAddition_INTERFACE_DEFINED__ */


#ifndef __IMultiplication_INTERFACE_DEFINED__
#define __IMultiplication_INTERFACE_DEFINED__

/* interface IMultiplication */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IMultiplication;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4D8093DC-CE8A-49ED-B245-EF66111F1A2E")
    IMultiplication : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__operand_A( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put__operand_A( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__operand_B( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put__operand_B( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Calculate( 
            /* [retval][out] */ LONG *_result) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMultiplicationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMultiplication * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMultiplication * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMultiplication * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMultiplication * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMultiplication * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMultiplication * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMultiplication * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__operand_A )( 
            IMultiplication * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put__operand_A )( 
            IMultiplication * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__operand_B )( 
            IMultiplication * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put__operand_B )( 
            IMultiplication * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Calculate )( 
            IMultiplication * This,
            /* [retval][out] */ LONG *_result);
        
        END_INTERFACE
    } IMultiplicationVtbl;

    interface IMultiplication
    {
        CONST_VTBL struct IMultiplicationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMultiplication_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMultiplication_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMultiplication_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMultiplication_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IMultiplication_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IMultiplication_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IMultiplication_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IMultiplication_get__operand_A(This,pVal)	\
    (This)->lpVtbl -> get__operand_A(This,pVal)

#define IMultiplication_put__operand_A(This,newVal)	\
    (This)->lpVtbl -> put__operand_A(This,newVal)

#define IMultiplication_get__operand_B(This,pVal)	\
    (This)->lpVtbl -> get__operand_B(This,pVal)

#define IMultiplication_put__operand_B(This,newVal)	\
    (This)->lpVtbl -> put__operand_B(This,newVal)

#define IMultiplication_Calculate(This,_result)	\
    (This)->lpVtbl -> Calculate(This,_result)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMultiplication_get__operand_A_Proxy( 
    IMultiplication * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB IMultiplication_get__operand_A_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IMultiplication_put__operand_A_Proxy( 
    IMultiplication * This,
    /* [in] */ LONG newVal);


void __RPC_STUB IMultiplication_put__operand_A_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMultiplication_get__operand_B_Proxy( 
    IMultiplication * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB IMultiplication_get__operand_B_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IMultiplication_put__operand_B_Proxy( 
    IMultiplication * This,
    /* [in] */ LONG newVal);


void __RPC_STUB IMultiplication_put__operand_B_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMultiplication_Calculate_Proxy( 
    IMultiplication * This,
    /* [retval][out] */ LONG *_result);


void __RPC_STUB IMultiplication_Calculate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMultiplication_INTERFACE_DEFINED__ */



#ifndef __COMBigIntLib_LIBRARY_DEFINED__
#define __COMBigIntLib_LIBRARY_DEFINED__

/* library COMBigIntLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_COMBigIntLib;

EXTERN_C const CLSID CLSID_Addition;

#ifdef __cplusplus

class DECLSPEC_UUID("00094B6D-D6AB-4C89-A5A5-6C337B279D7E")
Addition;
#endif

EXTERN_C const CLSID CLSID_Multiplication;

#ifdef __cplusplus

class DECLSPEC_UUID("04DD5F6B-7977-40F7-92F4-85D305557A15")
Multiplication;
#endif
#endif /* __COMBigIntLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


