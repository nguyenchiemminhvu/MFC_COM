// Sample_2_ClientDoc.cpp : implementation of the CSample_2_ClientDoc class
//

#include "stdafx.h"
#include "Sample_2_Client.h"

#include "Sample_2_ClientDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSample_2_ClientDoc

IMPLEMENT_DYNCREATE(CSample_2_ClientDoc, CDocument)

BEGIN_MESSAGE_MAP(CSample_2_ClientDoc, CDocument)
	//{{AFX_MSG_MAP(CSample_2_ClientDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

BEGIN_DISPATCH_MAP(CSample_2_ClientDoc, CDocument)
	//{{AFX_DISPATCH_MAP(CSample_2_ClientDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//      DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_DISPATCH_MAP
END_DISPATCH_MAP()

// Note: we add support for IID_ISample_2_Client to support typesafe binding
//  from VBA.  This IID must match the GUID that is attached to the 
//  dispinterface in the .ODL file.

// {5F2C89D3-A917-42FE-84F3-76E4B7A123C9}
static const IID IID_ISample_2_Client =
{ 0x5f2c89d3, 0xa917, 0x42fe, { 0x84, 0xf3, 0x76, 0xe4, 0xb7, 0xa1, 0x23, 0xc9 } };

BEGIN_INTERFACE_MAP(CSample_2_ClientDoc, CDocument)
	INTERFACE_PART(CSample_2_ClientDoc, IID_ISample_2_Client, Dispatch)
END_INTERFACE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSample_2_ClientDoc construction/destruction

CSample_2_ClientDoc::CSample_2_ClientDoc()
{
	// TODO: add one-time construction code here

	EnableAutomation();

	AfxOleLockApp();
}

CSample_2_ClientDoc::~CSample_2_ClientDoc()
{
	AfxOleUnlockApp();
}

BOOL CSample_2_ClientDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CSample_2_ClientDoc serialization

void CSample_2_ClientDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CSample_2_ClientDoc diagnostics

#ifdef _DEBUG
void CSample_2_ClientDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CSample_2_ClientDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CSample_2_ClientDoc commands
