// Addition.cpp : Implementation of CAddition

#include "stdafx.h"
#include "Addition.h"


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

STDMETHODIMP CAddition::get__operand_A(LONG* pVal)
{
	// TODO: Add your implementation code here
	*pVal = _operand_A;
	return S_OK;
}

STDMETHODIMP CAddition::put__operand_A(LONG newVal)
{
	// TODO: Add your implementation code here
	_operand_A = newVal;
	return S_OK;
}

STDMETHODIMP CAddition::get__operand_B(LONG* pVal)
{
	// TODO: Add your implementation code here
	*pVal = _operand_B;
	return S_OK;
}

STDMETHODIMP CAddition::put__operand_B(LONG newVal)
{
	// TODO: Add your implementation code here
	_operand_B = newVal;
	return S_OK;
}

STDMETHODIMP CAddition::Calculate(LONG* _result)
{
	// TODO: Add your implementation code here
	*_result = _operand_A + _operand_B;
	return S_OK;
}
