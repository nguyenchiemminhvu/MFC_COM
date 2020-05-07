#include <stdio.h>

#include <stddef.h> // for offsetof in METHOD_PROLOGUE

#include <ASSERT.h>

#include "Interface.h"

#include "Spaceship.h"

 

CSpaceshipFactory g_factory;

 

//----------member functions-----------------------------------------

BOOL CSpaceshipFactory::ExternalQueryInterface(int nIid, void** ppvObj)

{

    TRACE("\nEntering CSpaceshipFactory::ExternalQueryInterface()--nIid =  %d\n", nIid);

    switch (nIid)

       {

              case IID_IUnknown:

              case IID_IClassFactory:

                     *ppvObj = &m_xClassFactory;

                     break;

              default:

                     *ppvObj = NULL;

        return FALSE;

    }

    ExternalAddRef();

    return TRUE;

}

 

BOOL CSpaceshipFactory::XClassFactory::QueryInterface(int nIid, void** ppvObj)

{

    TRACE("\nEntering CSpaceshipFactory::XClassFactory::QueryInterface()--nIid = %d\n", nIid);

    METHOD_PROLOGUE(CSpaceshipFactory, ClassFactory) // makes pThis

    return pThis->ExternalQueryInterface(nIid, ppvObj); // delegate to CSpaceshipFactory

}

 

BOOL CSpaceshipFactory::XClassFactory::CreateInstance(int nIid, void** ppvObj)

{

    TRACE("\nEntering CSpaceshipFactory::XClassFactory::CreateInstance()\n");

    METHOD_PROLOGUE(CSpaceshipFactory, ClassFactory) // makes pThis

    CSpaceship* pObj = new CSpaceship();

    if (pObj->ExternalQueryInterface(nIid, ppvObj))

       {

        pObj->ExternalRelease(); // balance reference count

        return TRUE;

    }

    return FALSE;

}

 

DWORD CSpaceshipFactory::XClassFactory::Release()

{

    TRACE("\nEntering CSpaceshipFactory::XClassFactory::Release()\n");

    METHOD_PROLOGUE(CSpaceshipFactory, ClassFactory) // makes pThis

    return pThis->ExternalRelease(); // delegate to CSimulatedCmdTarget

}

 

DWORD CSpaceshipFactory::XClassFactory::AddRef()

{

    TRACE("\nEntering CSpaceshipFactory::XClassFactory::AddRef()\n");

    METHOD_PROLOGUE(CSpaceshipFactory, ClassFactory) // makes pThis

    return pThis->ExternalAddRef(); // delegate to CSimulatedCmdTarget

}

 

BOOL CSpaceship::ExternalQueryInterface(int nIid, void** ppvObj)

{

    TRACE("\nEntering CSpaceship::ExternalQueryInterface()--nIid = %d\n", nIid);

    switch (nIid)

       {

              case IID_IUnknown:

              case IID_IMotion:

                     *ppvObj = &m_xMotion; // Both IMotion and IVisual are derived

                     break;                // from IUnknown, so either pointer will do

              case IID_IVisual:

                     *ppvObj = &m_xVisual;

                     break;

              default:

                     *ppvObj = NULL;

        return FALSE;

    }

    ExternalAddRef();

    return TRUE;

}

 

BOOL CSpaceship::XMotion::QueryInterface(int nIid, void** ppvObj)

{

    TRACE("\nEntering CSpaceship::XMotion::QueryInterface()--nIid =  %d\n", nIid);

    METHOD_PROLOGUE(CSpaceship, Motion) // makes pThis

    return pThis->ExternalQueryInterface(nIid, ppvObj); // delegate to CSpaceship

}

 

DWORD CSpaceship::XMotion::Release()

{

    TRACE("\nEntering CSpaceship::XMotion::Release()\n");

    METHOD_PROLOGUE(CSpaceship, Motion) // makes pThis

    return pThis->ExternalRelease(); // delegate to CSimulatedCmdTarget

}

 

DWORD CSpaceship::XMotion::AddRef()

{

    TRACE("\nEntering CSpaceship::XMotion::AddRef()\n");

    METHOD_PROLOGUE(CSpaceship, Motion) // makes pThis

    return pThis->ExternalAddRef(); // delegate to CSimulatedCmdTarget

}

 

void CSpaceship::XMotion::Fly()

{

    TRACE("\nEntering CSpaceship::XMotion::Fly()\n");

    METHOD_PROLOGUE(CSpaceship, Motion) // makes pThis

    TRACE("this pointer = %p, pThis pointer = %p\n", this, pThis);

    TRACE("m_nPosition = %d\n", pThis->m_nPosition);

    TRACE("m_nAcceleration = %d\n", pThis->m_nAcceleration);

}

 

int& CSpaceship::XMotion::GetPosition()

{

    TRACE("\nEntering CSpaceship::XMotion::GetPosition()\n");

    METHOD_PROLOGUE(CSpaceship, Motion) // makes pThis

    TRACE("this pointer = %p, pThis pointer = %p\n", this, pThis);

    TRACE("m_nPosition = %d\n", pThis->m_nPosition);

    TRACE("m_nAcceleration = %d\n", pThis->m_nAcceleration);

    return pThis->m_nPosition;

}

 

BOOL CSpaceship::XVisual::QueryInterface(int nIid, void** ppvObj)

{

    TRACE("\nEntering CSpaceship::XVisual::QueryInterface()--nIid =  %d\n", nIid);

    METHOD_PROLOGUE(CSpaceship, Visual) // makes pThis

    return pThis->ExternalQueryInterface(nIid, ppvObj); // delegate to

                                                        //  CSpaceship

}

 

DWORD CSpaceship::XVisual::Release()

{

    TRACE("\nEntering CSpaceship::XVisual::Release()\n");

    METHOD_PROLOGUE(CSpaceship, Visual) // makes pThis

    return pThis->ExternalRelease(); // delegate to CSimulatedCmdTarget

}

 

DWORD CSpaceship::XVisual::AddRef()

{

    TRACE("\nEntering CSpaceship::XVisual::AddRef()\n");

    METHOD_PROLOGUE(CSpaceship, Visual) // makes pThis

    return pThis->ExternalAddRef(); // delegate to CSimulatedCmdTarget

}

 

void CSpaceship::XVisual::Display()

{

    TRACE("\nEntering CSpaceship::XVisual::Display()\n");

    METHOD_PROLOGUE(CSpaceship, Visual) // makes pThis

    TRACE("this pointer = %p, pThis pointer = %p\n", this, pThis);

    TRACE("m_nPosition = %d\n", pThis->m_nPosition);

    TRACE("m_nColor = %d\n", pThis->m_nColor);

}

 

//----------simulates COM component -----------------------------------

// In real COM, this would be DllGetClassObject(), which would be called

//  whenever a client called CoGetClassObject()

 

BOOL GetClassObject(int nClsid, int nIid, void** ppvObj)

{

    ASSERT(nClsid == CLSID_CSpaceship);

    ASSERT((nIid == IID_IUnknown) || (nIid == IID_IClassFactory));

    return g_factory.ExternalQueryInterface(nIid, ppvObj);

    // Refcount is 2, which prevents accidental deletion

}