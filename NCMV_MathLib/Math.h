#include "IMath.h"

extern long g_ComRefCount;

class Math : public IMath
{
public:
	Math()
	{
		InterlockedIncrement(&g_ComRefCount);
	}

	~Math()
	{
		InterlockedDecrement(&g_ComRefCount);
	}

	// IUnknown interface methods
	ULONG __stdcall AddRef();
	ULONG __stdcall Release();
	HRESULT __stdcall QueryInterface(REFIID riid, void **pObj);

	// IMath interface methods
	HRESULT __stdcall Add(long a, long b, long *outBuffer);
	HRESULT __stdcall Sub(long a, long b, long *outBuffer);
	HRESULT __stdcall Mul(long a, long b, long *outBuffer);
	
private:
	long m_refCount; // manage the reference count
};