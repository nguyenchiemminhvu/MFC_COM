

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Wed May 20 16:15:40 2020
 */
/* Compiler settings for .\SimpleATLCom.idl:
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

#ifndef __SimpleATLCom_h__
#define __SimpleATLCom_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ISimpleCom_FWD_DEFINED__
#define __ISimpleCom_FWD_DEFINED__
typedef interface ISimpleCom ISimpleCom;
#endif 	/* __ISimpleCom_FWD_DEFINED__ */


#ifndef ___ISimpleComEvents_FWD_DEFINED__
#define ___ISimpleComEvents_FWD_DEFINED__
typedef interface _ISimpleComEvents _ISimpleComEvents;
#endif 	/* ___ISimpleComEvents_FWD_DEFINED__ */


#ifndef __SimpleCom_FWD_DEFINED__
#define __SimpleCom_FWD_DEFINED__

#ifdef __cplusplus
typedef class SimpleCom SimpleCom;
#else
typedef struct SimpleCom SimpleCom;
#endif /* __cplusplus */

#endif 	/* __SimpleCom_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

#ifndef __ISimpleCom_INTERFACE_DEFINED__
#define __ISimpleCom_INTERFACE_DEFINED__

/* interface ISimpleCom */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISimpleCom;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("33DBBDAD-86F6-4AD5-8C8D-B571C7A5CBCF")
    ISimpleCom : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Calculate( 
            /* [retval][out] */ LONG *totalScore) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ComScore( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ComScore( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AtlScore( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AtlScore( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_studentName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_studentName( 
            /* [in] */ BSTR newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISimpleComVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISimpleCom * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISimpleCom * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISimpleCom * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISimpleCom * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISimpleCom * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISimpleCom * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISimpleCom * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Calculate )( 
            ISimpleCom * This,
            /* [retval][out] */ LONG *totalScore);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ComScore )( 
            ISimpleCom * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ComScore )( 
            ISimpleCom * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AtlScore )( 
            ISimpleCom * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AtlScore )( 
            ISimpleCom * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_studentName )( 
            ISimpleCom * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_studentName )( 
            ISimpleCom * This,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } ISimpleComVtbl;

    interface ISimpleCom
    {
        CONST_VTBL struct ISimpleComVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISimpleCom_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISimpleCom_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISimpleCom_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISimpleCom_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISimpleCom_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISimpleCom_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISimpleCom_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISimpleCom_Calculate(This,totalScore)	\
    (This)->lpVtbl -> Calculate(This,totalScore)

#define ISimpleCom_get_ComScore(This,pVal)	\
    (This)->lpVtbl -> get_ComScore(This,pVal)

#define ISimpleCom_put_ComScore(This,newVal)	\
    (This)->lpVtbl -> put_ComScore(This,newVal)

#define ISimpleCom_get_AtlScore(This,pVal)	\
    (This)->lpVtbl -> get_AtlScore(This,pVal)

#define ISimpleCom_put_AtlScore(This,newVal)	\
    (This)->lpVtbl -> put_AtlScore(This,newVal)

#define ISimpleCom_get_studentName(This,pVal)	\
    (This)->lpVtbl -> get_studentName(This,pVal)

#define ISimpleCom_put_studentName(This,newVal)	\
    (This)->lpVtbl -> put_studentName(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISimpleCom_Calculate_Proxy( 
    ISimpleCom * This,
    /* [retval][out] */ LONG *totalScore);


void __RPC_STUB ISimpleCom_Calculate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISimpleCom_get_ComScore_Proxy( 
    ISimpleCom * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISimpleCom_get_ComScore_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISimpleCom_put_ComScore_Proxy( 
    ISimpleCom * This,
    /* [in] */ LONG newVal);


void __RPC_STUB ISimpleCom_put_ComScore_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISimpleCom_get_AtlScore_Proxy( 
    ISimpleCom * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISimpleCom_get_AtlScore_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISimpleCom_put_AtlScore_Proxy( 
    ISimpleCom * This,
    /* [in] */ LONG newVal);


void __RPC_STUB ISimpleCom_put_AtlScore_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISimpleCom_get_studentName_Proxy( 
    ISimpleCom * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISimpleCom_get_studentName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISimpleCom_put_studentName_Proxy( 
    ISimpleCom * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ISimpleCom_put_studentName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISimpleCom_INTERFACE_DEFINED__ */



#ifndef __SimpleATLComLib_LIBRARY_DEFINED__
#define __SimpleATLComLib_LIBRARY_DEFINED__

/* library SimpleATLComLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_SimpleATLComLib;

#ifndef ___ISimpleComEvents_DISPINTERFACE_DEFINED__
#define ___ISimpleComEvents_DISPINTERFACE_DEFINED__

/* dispinterface _ISimpleComEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__ISimpleComEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("58F34D87-00B2-4B67-826C-A54C8F70C4C0")
    _ISimpleComEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _ISimpleComEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _ISimpleComEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _ISimpleComEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _ISimpleComEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _ISimpleComEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _ISimpleComEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _ISimpleComEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _ISimpleComEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _ISimpleComEventsVtbl;

    interface _ISimpleComEvents
    {
        CONST_VTBL struct _ISimpleComEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _ISimpleComEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define _ISimpleComEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define _ISimpleComEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define _ISimpleComEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define _ISimpleComEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define _ISimpleComEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define _ISimpleComEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___ISimpleComEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_SimpleCom;

#ifdef __cplusplus

class DECLSPEC_UUID("1F75D981-7F55-4A95-A51F-4CFE31C0C4C3")
SimpleCom;
#endif
#endif /* __SimpleATLComLib_LIBRARY_DEFINED__ */

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


