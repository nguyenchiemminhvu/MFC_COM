// Sample_2.h : main header file for the SAMPLE_2 DLL
//

#if !defined(AFX_SAMPLE_2_H__B4E13A5D_2D87_4949_ABBE_A024FC01B533__INCLUDED_)
#define AFX_SAMPLE_2_H__B4E13A5D_2D87_4949_ABBE_A024FC01B533__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CSample_2App
// See Sample_2.cpp for the implementation of this class
//

class CSample_2App : public CWinApp
{
public:
	CSample_2App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSample_2App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

	//{{AFX_MSG(CSample_2App)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SAMPLE_2_H__B4E13A5D_2D87_4949_ABBE_A024FC01B533__INCLUDED_)
