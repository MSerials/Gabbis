#pragma once


// CThresholdDlg �Ի���

class CThresholdDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CThresholdDlg)

public:
	CThresholdDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CThresholdDlg();

// �Ի�������
	enum { IDD = IDD_THRESHOLDDLG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
