// TestCOM.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "windows.h"
#include "winnls.h"
#include "shobjidl.h"
#include "objbase.h"
#include "objidl.h"
#include "shlguid.h"
#include "atlstr.h"

#include <iostream>
#include <wininet.h>
#include <shlobj.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
    // 1. Initialize the COM library (make Windows load the DLLs). Normally you would
    // call this in your InitInstance() or other startup code.  In MFC apps, use
    //  AfxOleInit() instead.</FONT>
    CoInitialize ( NULL );
	
	// 2. Create a COM object, using the Active Desktop coclass provided by the shell.
    // The 4th parameter tells COM what interface we want (IActiveDesktop).
	HRESULT hr;
	IActiveDesktop* pIAD;
    hr = CoCreateInstance ( CLSID_ActiveDesktop,
                            NULL,
                            CLSCTX_INPROC_SERVER,
                            IID_IActiveDesktop,
                            (void**) &pIAD );

    if ( SUCCEEDED(hr) )
    {
		// 3. If the COM object was created, call its GetWallpaper() method.
		WCHAR   wszWallpaper [MAX_PATH];
		hr = pIAD->GetWallpaper ( wszWallpaper, MAX_PATH, 0 );

		if ( SUCCEEDED(hr) )
		{
			// 4. If GetWallpaper() succeeded, print the filename it returned.
			// Note that I'm using wcout to display the Unicode string wszWallpaper.
			// wcout is the Unicode equivalent of cout.
			wcout << L"Wallpaper path is:\n    " << wszWallpaper << endl << endl;
		}
		else
		{
			cout << _T("GetWallpaper() failed.") << endl << endl;
		}

		// 5. Release the interface.
		pIAD->Release();
    }
    else
    {
		cout << _T("CoCreateInstance() failed.") << endl << endl;
    }

    // 6. Uninit the COM library.  In MFC apps, this is not necessary since MFC does
    // it for us.
    CoUninitialize();

	return 0;
}

