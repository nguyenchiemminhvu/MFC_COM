// Sample_2_ClientView.cpp : implementation of the CSample_2_ClientView class
//

#include "stdafx.h"
#include "Sample_2_Client.h"

#include "Sample_2_ClientDoc.h"
#include "Sample_2_ClientView.h"

#include "Interface.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

// {692D03A4-C689-11CE-B337-88EA36DE9E4E}

static const IID IID_IMotion =

{ 0x692d03a4, 0xc689, 0x11ce, { 0xb3, 0x37, 0x88, 0xea, 0x36, 0xde, 0x9e, 0x4e } };

// {692D03A5-C689-11CE-B337-88EA36DE9E4E}

static const IID IID_IVisual =

{ 0x692d03a5, 0xc689, 0x11ce, { 0xb3, 0x37, 0x88, 0xea, 0x36, 0xde, 0x9e, 0x4e } };


/////////////////////////////////////////////////////////////////////////////
// CSample_2_ClientView

IMPLEMENT_DYNCREATE(CSample_2_ClientView, CView)

BEGIN_MESSAGE_MAP(CSample_2_ClientView, CView)
	//{{AFX_MSG_MAP(CSample_2_ClientView)
	ON_COMMAND(ID_TEST_SPACESHIP, OnTestSpaceship)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSample_2_ClientView construction/destruction

CSample_2_ClientView::CSample_2_ClientView()
{
	// TODO: add construction code here

}

CSample_2_ClientView::~CSample_2_ClientView()
{
}

BOOL CSample_2_ClientView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CSample_2_ClientView drawing

void CSample_2_ClientView::OnDraw(CDC* pDC)
{
	CSample_2_ClientDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CSample_2_ClientView diagnostics

#ifdef _DEBUG
void CSample_2_ClientView::AssertValid() const
{
	CView::AssertValid();
}

void CSample_2_ClientView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CSample_2_ClientDoc* CSample_2_ClientView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSample_2_ClientDoc)));
	return (CSample_2_ClientDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CSample_2_ClientView message handlers

void CSample_2_ClientView::OnTestSpaceship() 
{
	// TODO: Add your command handler code here
	// TODO: Add your command handler code here

    CLSID clsid;

    LPCLASSFACTORY pClf;

    LPUNKNOWN pUnk;

    IMotion* pMot;

    IVisual* pVis;

 

    HRESULT hr;
	char chr[255];
    if ((hr = ::CLSIDFromProgID(L"Spaceship", &clsid)) != NOERROR)

    {
		sprintf(chr, "unable to find Program ID -- error = %x\n", hr);
        AfxMessageBox(chr);

        return;

    }

    if ((hr = ::CoGetClassObject(clsid, CLSCTX_INPROC_SERVER, NULL, IID_IClassFactory, (void **) &pClf)) != NOERROR)

    {

		sprintf(chr, "unable to find CLSID -- error = %x\n", hr);
        AfxMessageBox(chr);
        return;

    }

 

    pClf->CreateInstance(NULL, IID_IUnknown, (void**) &pUnk);

    pUnk->QueryInterface(IID_IMotion, (void**) &pMot); // All three

	pMot->QueryInterface(IID_IVisual, (void**) &pVis); //  pointers

                                                       //  should work

    TRACE("main: pUnk = %p, pMot = %p, pDis = %p\n", pUnk, pMot, pVis);

 

    // Test all the interface virtual functions

    pMot->Fly();

    int nPos = pMot->GetPosition();

    TRACE("nPos = %d\n", nPos);

    pVis->Display();



    pClf->Release();

    pUnk->Release();

    pMot->Release();

    pVis->Release();

    AfxMessageBox("Test succeeded. See Debug window for output.");
}
