// Sample_2_ClientDoc.h : interface of the CSample_2_ClientDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_SAMPLE_2_CLIENTDOC_H__F0649CA8_AA6D_4810_BDC6_47E9A03CE8E8__INCLUDED_)
#define AFX_SAMPLE_2_CLIENTDOC_H__F0649CA8_AA6D_4810_BDC6_47E9A03CE8E8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CSample_2_ClientDoc : public CDocument
{
protected: // create from serialization only
	CSample_2_ClientDoc();
	DECLARE_DYNCREATE(CSample_2_ClientDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSample_2_ClientDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CSample_2_ClientDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CSample_2_ClientDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

	// Generated OLE dispatch map functions
	//{{AFX_DISPATCH(CSample_2_ClientDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_DISPATCH
	DECLARE_DISPATCH_MAP()
	DECLARE_INTERFACE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SAMPLE_2_CLIENTDOC_H__F0649CA8_AA6D_4810_BDC6_47E9A03CE8E8__INCLUDED_)
