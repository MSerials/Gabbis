#pragma once


// CThresholdDlg 对话框

class CThresholdDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CThresholdDlg)

public:
	CThresholdDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CThresholdDlg();

// 对话框数据
	enum { IDD = IDD_THRESHOLDDLG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
