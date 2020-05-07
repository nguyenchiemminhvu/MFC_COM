// Sample_2_Client.h : main header file for the SAMPLE_2_CLIENT application
//

#if !defined(AFX_SAMPLE_2_CLIENT_H__66E4AE13_58D6_4FCC_8AF3_11B89CEA82E8__INCLUDED_)
#define AFX_SAMPLE_2_CLIENT_H__66E4AE13_58D6_4FCC_8AF3_11B89CEA82E8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CSample_2_ClientApp:
// See Sample_2_Client.cpp for the implementation of this class
//

class CSample_2_ClientApp : public CWinApp
{
public:
	CSample_2_ClientApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSample_2_ClientApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	COleTemplateServer m_server;
		// Server object for document creation
	//{{AFX_MSG(CSample_2_ClientApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SAMPLE_2_CLIENT_H__66E4AE13_58D6_4FCC_8AF3_11B89CEA82E8__INCLUDED_)
