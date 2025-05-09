﻿// CQuantizationDlg.cpp: 구현 파일
//

#include "pch.h"
#include "MFCApplicationIP.h"
#include "afxdialogex.h"
#include "CQuantizationDlg.h"


// CQuantizationDlg 대화 상자

IMPLEMENT_DYNAMIC(CQuantizationDlg, CDialog)

CQuantizationDlg::CQuantizationDlg(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG2, pParent)
	, m_QuantBit(0)
{

}

CQuantizationDlg::~CQuantizationDlg()
{
}

void CQuantizationDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_QuantBit);
	DDV_MinMaxInt(pDX, m_QuantBit, 1, 8);
}


BEGIN_MESSAGE_MAP(CQuantizationDlg, CDialog)
END_MESSAGE_MAP()


// CQuantizationDlg 메시지 처리기
