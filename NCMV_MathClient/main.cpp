#include <objbase.h>
#include <stdio.h>

#import "IMath.tlb"

int main()
{
	CoInitialize(NULL);

	NCMV_MathLib::IMathPtr mLib;
	mLib.CreateInstance("NCMV.MathLib");

	printf("%d\n", mLib->Add(3, 4));
	printf("%d\n", mLib->Sub(3, 4));
	printf("%d\n", mLib->Mul(3, 4));

	CoUninitialize();
	return 0;
}