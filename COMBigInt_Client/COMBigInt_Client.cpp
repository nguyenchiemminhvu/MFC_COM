// COMBigInt_Client.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <objbase.h>
#include <unknwn.h>

#import "COMBigInt.tlb" no_namespace

int _tmain(int argc, _TCHAR* argv[])
{
	CoInitialize(NULL);

	HRESULT hr;

	CLSID clsid;
	hr = CLSIDFromProgID(OLESTR("COMBigInt.Addition"), &clsid);
	if (SUCCEEDED(hr))
	{
		IAddition *iAdd;

		hr = CoCreateInstance(clsid, NULL, CLSCTX_INPROC_SERVER, __uuidof(IAddition), (void**)&iAdd);
		if (SUCCEEDED(hr))
		{
			iAdd->_operand_A = _bstr_t("100000000000000000000000000000000").GetBSTR();
			iAdd->_operand_B = _bstr_t("2999999999999999999999999999999999999999999").GetBSTR();
			BSTR sum;
			iAdd->Calculate(&sum);

			_bstr_t test = _bstr_t(sum);
			char s[255];
			strcpy_s(s, test.length() + 1, test);
			printf("%s\n", s);

			iAdd->ShowTestDialog();
		}
	}

	CoUninitialize();
	return 0;
}

