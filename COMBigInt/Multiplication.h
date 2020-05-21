// Multiplication.h : Declaration of the CMultiplication

#pragma once
#include "resource.h"       // main symbols

#include "COMBigInt.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif



// CMultiplication

class ATL_NO_VTABLE CMultiplication :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CMultiplication, &CLSID_Multiplication>,
	public ISupportErrorInfo,
	public IDispatchImpl<IMultiplication, &IID_IMultiplication, &LIBID_COMBigIntLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CMultiplication()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_MULTIPLICATION)


BEGIN_COM_MAP(CMultiplication)
	COM_INTERFACE_ENTRY(IMultiplication)
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

	STDMETHOD(get__operand_A)(LONG* pVal);
	STDMETHOD(put__operand_A)(LONG newVal);
	STDMETHOD(get__operand_B)(LONG* pVal);
	STDMETHOD(put__operand_B)(LONG newVal);

	STDMETHOD(Calculate)(LONG* _result);

private:

	long _operand_A;
	long _operand_B;
};

OBJECT_ENTRY_AUTO(__uuidof(Multiplication), CMultiplication)
