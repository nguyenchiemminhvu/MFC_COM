// SimpleATLCom_Client.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace SimpleATLComLib;

int _tmain(int argc, _TCHAR* argv[])
{
	ISimpleCom ^objSimpleCom = gcnew SimpleComClass();
	objSimpleCom->AtlScore = 10;
	objSimpleCom->ComScore = 5;
	int test = objSimpleCom->Calculate();

	printf("%d\n", test);

	return 0;
}

