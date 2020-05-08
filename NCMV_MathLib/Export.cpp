#include <objbase.h>

#include "Math.h"
#include "MathFactory.h"
#include "MathGUID.h"

HMODULE g_module = NULL;

BOOL APIENTRY DllMain(HANDLE hModule, DWORD dwReason, void *lpReserved)
{
	if (dwReason == DLL_PROCESS_ATTACH)
	{
		g_module = (HMODULE)hModule;
	}
	return TRUE;
}

long g_ComRefCount = 0;

STDAPI DllCanUnloadNow()
{
	if (g_ComRefCount == 0)
		return S_OK;
	else
		return S_FALSE;
}

STDAPI DllGetClassObject(const CLSID &clsid, const IID &iid, void **ppv)
{
	if (clsid == CLSID_MathObject)
	{
		MathFactory * pFact = new MathFactory;
		if (pFact == NULL)
		{
			return E_OUTOFMEMORY;
		}
		else
		{
			return pFact->QueryInterface(iid, ppv);
		}
	}

	return CLASS_E_CLASSNOTAVAILABLE;
}