#include <objbase.h>

#include "MathFactory.h"
#include "Math.h"

ULONG __stdcall MathFactory::AddRef()
{
	return InterlockedIncrement(&m_refCount);
}

ULONG __stdcall MathFactory::Release()
{
	return InterlockedDecrement(&m_refCount);
}

HRESULT __stdcall MathFactory::QueryInterface(REFIID riid, void **pObj)
{
	if (riid == IID_IUnknown)
	{
		*pObj = static_cast<IClassFactory*>(this);
		AddRef();
		return S_OK;
	}

	if (riid == IID_IClassFactory)
	{
		*pObj = static_cast<IClassFactory*>(this);
		AddRef();
		return S_OK;
	}

	*pObj = NULL;
	return E_NOINTERFACE;
}

HRESULT __stdcall MathFactory::CreateInstance(IUnknown *pUnknownOuter, const IID &iid, void **ppv)
{
	if (pUnknownOuter != NULL)
	{
		return CLASS_E_NOAGGREGATION;
	}

	Math *mathObj = new Math;
	if (mathObj == NULL)
	{
		return E_OUTOFMEMORY;
	}

	return mathObj->QueryInterface(iid, ppv);
}

HRESULT __stdcall MathFactory::LockServer(BOOL bLock)
{
	return E_NOTIMPL;
}