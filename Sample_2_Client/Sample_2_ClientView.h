// Sample_2_ClientView.h : interface of the CSample_2_ClientView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_SAMPLE_2_CLIENTVIEW_H__F8F761CC_8591_4A25_BDBB_721281F50546__INCLUDED_)
#define AFX_SAMPLE_2_CLIENTVIEW_H__F8F761CC_8591_4A25_BDBB_721281F50546__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CSample_2_ClientView : public CView
{
protected: // create from serialization only
	CSample_2_ClientView();
	DECLARE_DYNCREATE(CSample_2_ClientView)

// Attributes
public:
	CSample_2_ClientDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSample_2_ClientView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CSample_2_ClientView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CSample_2_ClientView)
	afx_msg void OnTestSpaceship();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in Sample_2_ClientView.cpp
inline CSample_2_ClientDoc* CSample_2_ClientView::GetDocument()
   { return (CSample_2_ClientDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SAMPLE_2_CLIENTVIEW_H__F8F761CC_8591_4A25_BDBB_721281F50546__INCLUDED_)
