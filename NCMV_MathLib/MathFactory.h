#include <objbase.h>

extern long g_ComRefCount;

class MathFactory : public IClassFactory
{
public:
	MathFactory()
	{
		m_refCount = 0;
		InterlockedIncrement(&g_ComRefCount);
	}

	~MathFactory()
	{
		InterlockedDecrement(&g_ComRefCount);
	}

	// IUnknown interface methods
	ULONG __stdcall AddRef();
	ULONG __stdcall Release();
	HRESULT __stdcall QueryInterface(REFIID riid, void **pObj);

	// IClassFactory interface methods
	virtual HRESULT __stdcall CreateInstance(IUnknown *pUnknownOuter, const IID &iid, void **ppv);
	virtual HRESULT __stdcall LockServer(BOOL bLock);

private:
	long m_refCount;
};