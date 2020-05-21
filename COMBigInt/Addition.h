// Addition.h : Declaration of the CAddition

#pragma once
#include "resource.h"       // main symbols

#include "COMBigInt.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif



// CAddition

class ATL_NO_VTABLE CAddition :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CAddition, &CLSID_Addition>,
	public ISupportErrorInfo,
	public IDispatchImpl<IAddition, &IID_IAddition, &LIBID_COMBigIntLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CAddition()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_ADDITION)


BEGIN_COM_MAP(CAddition)
	COM_INTERFACE_ENTRY(IAddition)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);


	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:

	STDMETHOD(get__operand_A)(BSTR* pVal);
	STDMETHOD(put__operand_A)(BSTR newVal);
	STDMETHOD(get__operand_B)(BSTR* pVal);
	STDMETHOD(put__operand_B)(BSTR newVal);

	STDMETHOD(Calculate)(BSTR* _result);
	STDMETHOD(ShowTestDialog)(void);

private:
	
	CComBSTR _operand_A;
	CComBSTR _operand_B;
};

OBJECT_ENTRY_AUTO(__uuidof(Addition), CAddition)
