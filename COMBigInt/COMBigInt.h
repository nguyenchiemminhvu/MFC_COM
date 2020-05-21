

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Thu May 21 15:18:07 2020
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


#ifndef __Addition_FWD_DEFINED__
#define __Addition_FWD_DEFINED__

#ifdef __cplusplus
typedef class Addition Addition;
#else
typedef struct Addition Addition;
#endif /* __cplusplus */

#endif 	/* __Addition_FWD_DEFINED__ */


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
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put__operand_A( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__operand_B( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put__operand_B( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Calculate( 
            /* [out] */ BSTR *_result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ShowTestDialog( void) = 0;
        
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
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put__operand_A )( 
            IAddition * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__operand_B )( 
            IAddition * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put__operand_B )( 
            IAddition * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Calculate )( 
            IAddition * This,
            /* [out] */ BSTR *_result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ShowTestDialog )( 
            IAddition * This);
        
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

#define IAddition_ShowTestDialog(This)	\
    (This)->lpVtbl -> ShowTestDialog(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAddition_get__operand_A_Proxy( 
    IAddition * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAddition_get__operand_A_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAddition_put__operand_A_Proxy( 
    IAddition * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAddition_put__operand_A_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAddition_get__operand_B_Proxy( 
    IAddition * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAddition_get__operand_B_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IAddition_put__operand_B_Proxy( 
    IAddition * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAddition_put__operand_B_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAddition_Calculate_Proxy( 
    IAddition * This,
    /* [out] */ BSTR *_result);


void __RPC_STUB IAddition_Calculate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAddition_ShowTestDialog_Proxy( 
    IAddition * This);


void __RPC_STUB IAddition_ShowTestDialog_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAddition_INTERFACE_DEFINED__ */



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
#endif /* __COMBigIntLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


