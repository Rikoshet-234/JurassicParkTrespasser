#ifndef _H_COLLISION_EDITOR
#define _H_COLLISION_EDITOR

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#ifdef COLLISION_EDITOR
#include "resource.h"		// main symbols
#else
#include "GUIApp/Resource.h"
#endif

#include "mmsystem.h"
#include "Lib/Audio/SoundTypes.hpp"
#include "Lib/Audio/Audio.hpp"
#include "Lib/audio/Material.hpp"


/////////////////////////////////////////////////////////////////////////////
// CCollisionEditorApp:
// See CollisionEditor.cpp for the implementation of this class
//

class CCollisionEditorApp : public CWinApp
{
public:
	CCollisionEditorApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCollisionEditorApp)
	public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CCollisionEditorApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////
#endif