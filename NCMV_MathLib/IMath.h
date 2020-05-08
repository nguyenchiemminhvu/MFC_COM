/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 5.01.0164 */
/* at Fri May 08 14:35:15 2020
 */
/* Compiler settings for E:\Projects\MFC_COM\NCMV_MathLib\IMath.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )


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

#ifndef __IMath_h__
#define __IMath_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __IMath_FWD_DEFINED__
#define __IMath_FWD_DEFINED__
typedef interface IMath IMath;
#endif 	/* __IMath_FWD_DEFINED__ */


#ifndef __IMath_FWD_DEFINED__
#define __IMath_FWD_DEFINED__
typedef interface IMath IMath;
#endif 	/* __IMath_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __IMath_INTERFACE_DEFINED__
#define __IMath_INTERFACE_DEFINED__

/* interface IMath */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IMath;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1221db62-f3d8-11d4-825d-00104b3646c1")
    IMath : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ long a,
            /* [in] */ long b,
            /* [retval][out] */ long __RPC_FAR *outBuffer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Sub( 
            /* [in] */ long a,
            /* [in] */ long b,
            /* [retval][out] */ long __RPC_FAR *outBuffer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Mul( 
            /* [in] */ long a,
            /* [in] */ long b,
            /* [retval][out] */ long __RPC_FAR *outBuffer) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMathVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IMath __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IMath __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IMath __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Add )( 
            IMath __RPC_FAR * This,
            /* [in] */ long a,
            /* [in] */ long b,
            /* [retval][out] */ long __RPC_FAR *outBuffer);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Sub )( 
            IMath __RPC_FAR * This,
            /* [in] */ long a,
            /* [in] */ long b,
            /* [retval][out] */ long __RPC_FAR *outBuffer);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Mul )( 
            IMath __RPC_FAR * This,
            /* [in] */ long a,
            /* [in] */ long b,
            /* [retval][out] */ long __RPC_FAR *outBuffer);
        
        END_INTERFACE
    } IMathVtbl;

    interface IMath
    {
        CONST_VTBL struct IMathVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMath_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMath_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMath_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMath_Add(This,a,b,outBuffer)	\
    (This)->lpVtbl -> Add(This,a,b,outBuffer)

#define IMath_Sub(This,a,b,outBuffer)	\
    (This)->lpVtbl -> Sub(This,a,b,outBuffer)

#define IMath_Mul(This,a,b,outBuffer)	\
    (This)->lpVtbl -> Mul(This,a,b,outBuffer)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IMath_Add_Proxy( 
    IMath __RPC_FAR * This,
    /* [in] */ long a,
    /* [in] */ long b,
    /* [retval][out] */ long __RPC_FAR *outBuffer);


void __RPC_STUB IMath_Add_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMath_Sub_Proxy( 
    IMath __RPC_FAR * This,
    /* [in] */ long a,
    /* [in] */ long b,
    /* [retval][out] */ long __RPC_FAR *outBuffer);


void __RPC_STUB IMath_Sub_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMath_Mul_Proxy( 
    IMath __RPC_FAR * This,
    /* [in] */ long a,
    /* [in] */ long b,
    /* [retval][out] */ long __RPC_FAR *outBuffer);


void __RPC_STUB IMath_Mul_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMath_INTERFACE_DEFINED__ */



#ifndef __NCMV_MathLib_LIBRARY_DEFINED__
#define __NCMV_MathLib_LIBRARY_DEFINED__

/* library NCMV_MathLib */
/* [helpstring][uuid] */ 



EXTERN_C const IID LIBID_NCMV_MathLib;
#endif /* __NCMV_MathLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
