
// gMFCLog.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CgMFCLogApp:
// �� Ŭ������ ������ ���ؼ��� gMFCLog.cpp�� �����Ͻʽÿ�.
//

class CgMFCLogApp : public CWinApp
{
public:
	CgMFCLogApp();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CgMFCLogApp theApp;