// SimpleCom.h : Declaration of the CSimpleCom

#pragma once
#include "resource.h"       // main symbols

#include "SimpleATLCom.h"
#include "_ISimpleComEvents_CP.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif



// CSimpleCom

class ATL_NO_VTABLE CSimpleCom :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CSimpleCom, &CLSID_SimpleCom>,
	public IConnectionPointContainerImpl<CSimpleCom>,
	public CProxy_ISimpleComEvents<CSimpleCom>,
	public IDispatchImpl<ISimpleCom, &IID_ISimpleCom, &LIBID_SimpleATLComLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CSimpleCom()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_SIMPLECOM)


BEGIN_COM_MAP(CSimpleCom)
	COM_INTERFACE_ENTRY(ISimpleCom)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(IConnectionPointContainer)
END_COM_MAP()

BEGIN_CONNECTION_POINT_MAP(CSimpleCom)
	CONNECTION_POINT_ENTRY(__uuidof(_ISimpleComEvents))
END_CONNECTION_POINT_MAP()


	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:

	STDMETHOD(Calculate)(LONG* totalScore);
	STDMETHOD(get_ComScore)(LONG* pVal);
	STDMETHOD(put_ComScore)(LONG newVal);
	STDMETHOD(get_AtlScore)(LONG* pVal);
	STDMETHOD(put_AtlScore)(LONG newVal);
	STDMETHOD(get_studentName)(BSTR* pVal);
	STDMETHOD(put_studentName)(BSTR newVal);
};

OBJECT_ENTRY_AUTO(__uuidof(SimpleCom), CSimpleCom)
