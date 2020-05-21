// Addition.cpp : Implementation of CAddition

#include "stdafx.h"
#include "Utilities.h"
#include "Addition.h"

#include <string>
#include <sstream>
#include <comutil.h>
#pragma comment(lib,"comsuppw.lib")

// CAddition

STDMETHODIMP CAddition::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_IAddition
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CAddition::get__operand_A(BSTR* pVal)
{
	// TODO: Add your implementation code here
	*pVal = _operand_A.Copy();
	return S_OK;
}

STDMETHODIMP CAddition::put__operand_A(BSTR newVal)
{
	// TODO: Add your implementation code here
	_operand_A = newVal;
	return S_OK;
}

STDMETHODIMP CAddition::get__operand_B(BSTR* pVal)
{
	// TODO: Add your implementation code here
	*pVal = _operand_B.Copy();
	return S_OK;
}

STDMETHODIMP CAddition::put__operand_B(BSTR newVal)
{
	// TODO: Add your implementation code here
	_operand_B = newVal;
	return S_OK;
}

STDMETHODIMP CAddition::Calculate(BSTR* _result)
{
	// TODO: Add your implementation code here
	std::string a = BStrToSTDStr(_operand_A);
	std::string b = BStrToSTDStr(_operand_B);
	std::string sum = sumTwoBigInteger(a, b);
	BSTR res = STDStrToBStr(sum);

	*_result = res;
	return S_OK;
}
