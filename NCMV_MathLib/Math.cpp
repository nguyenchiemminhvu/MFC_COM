#include <objbase.h>

#include "Math.h"
#include "IMath_i.c"

ULONG __stdcall Math::AddRef()
{
	return InterlockedIncrement(&m_refCount);
}

ULONG __stdcall Math::Release()
{
	return InterlockedDecrement(&m_refCount);
}

HRESULT __stdcall Math::QueryInterface(REFIID riid, void **pObj)
{
	if (riid == IID_IUnknown)
	{
		*pObj = static_cast<IMath*>(this);
		AddRef();
		return S_OK;
	}
	
	if (riid == IID_IMath)
	{
		*pObj = static_cast<IMath*>(this);
		AddRef();
		return S_OK;
	}

	*pObj = NULL;
	return E_NOINTERFACE;
}

HRESULT __stdcall Math::Add(long a, long b, long *outBuffer)
{
	*outBuffer = a + b;
	return S_OK;
}

HRESULT __stdcall Math::Sub(long a, long b, long *outBuffer)
{
	*outBuffer = a - b;
	return S_OK;
}

HRESULT __stdcall Math::Mul(long a, long b, long *outBuffer)
{
	*outBuffer = a * b;
	return S_OK;
}