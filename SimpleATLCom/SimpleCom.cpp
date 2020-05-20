// SimpleCom.cpp : Implementation of CSimpleCom

#include "stdafx.h"
#include "SimpleCom.h"


// CSimpleCom
long comScore, atlScore;
CComBSTR studentName;

STDMETHODIMP CSimpleCom::Calculate(LONG* totalScore)
{
	// TODO: Add your implementation code here
	*totalScore = comScore + atlScore;
	return S_OK;
}

STDMETHODIMP CSimpleCom::get_ComScore(LONG* pVal)
{
	// TODO: Add your implementation code here
	*pVal = comScore;
	return S_OK;
}

STDMETHODIMP CSimpleCom::put_ComScore(LONG newVal)
{
	// TODO: Add your implementation code here
	comScore = newVal;
	return S_OK;
}

STDMETHODIMP CSimpleCom::get_AtlScore(LONG* pVal)
{
	// TODO: Add your implementation code here
	*pVal = atlScore;
	return S_OK;
}

STDMETHODIMP CSimpleCom::put_AtlScore(LONG newVal)
{
	// TODO: Add your implementation code here
	atlScore = newVal;
	return S_OK;
}

STDMETHODIMP CSimpleCom::get_studentName(BSTR* pVal)
{
	// TODO: Add your implementation code here
	*pVal = studentName.Copy();
	return S_OK;
}

STDMETHODIMP CSimpleCom::put_studentName(BSTR newVal)
{
	// TODO: Add your implementation code here
	studentName = newVal;
	return S_OK;
}
