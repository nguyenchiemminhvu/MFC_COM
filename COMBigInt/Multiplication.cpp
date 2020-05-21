// Multiplication.cpp : Implementation of CMultiplication

#include "stdafx.h"
#include "Utilities.h"
#include "Multiplication.h"

#include <vector>
#include <string>
#include <sstream>
#include <comutil.h>
#pragma comment(lib,"comsuppw.lib")

// CMultiplication

STDMETHODIMP CMultiplication::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_IMultiplication
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CMultiplication::get__operand_A(BSTR* pVal)
{
	// TODO: Add your implementation code here
	*pVal = _operand_A.Copy();
	return S_OK;
}

STDMETHODIMP CMultiplication::put__operand_A(BSTR newVal)
{
	// TODO: Add your implementation code here
	_operand_A = newVal;
	return S_OK;
}

STDMETHODIMP CMultiplication::get__operand_B(BSTR* pVal)
{
	// TODO: Add your implementation code here
	*pVal = _operand_B.Copy();
	return S_OK;
}

STDMETHODIMP CMultiplication::put__operand_B(BSTR newVal)
{
	// TODO: Add your implementation code here
	_operand_B = newVal;
	return S_OK;
}

STDMETHODIMP CMultiplication::Calculate(BSTR* _result)
{
	// TODO: Add your implementation code here
	std::string a = BStrToSTDStr(_operand_A);
	std::string b = BStrToSTDStr(_operand_B);
	std::string mul = multiplyTwoStrings(a, b);
	BSTR res = STDStrToBStr(mul);

	*_result = res;
	return S_OK;
}
