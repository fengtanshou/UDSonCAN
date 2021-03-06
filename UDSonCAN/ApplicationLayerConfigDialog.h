#pragma once

class CApplicationLayer;
class CNetworkLayer;

// CApplicationLayerConfigDialog 对话框

class CApplicationLayerConfigDialog : public CDialogEx
{
	DECLARE_DYNAMIC(CApplicationLayerConfigDialog)

public:
	CApplicationLayerConfigDialog(CApplicationLayer &applicationLayer, CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CApplicationLayerConfigDialog();

// 对话框数据
	enum { IDD = IDD_APPLICATIONLAYERCONFIG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

public:
	virtual BOOL OnInitDialog();
protected:
	CString m_csTesterPhysicalAddress;
	CString m_csECUPhysicalAddress;
	CString m_csECUFunctionalAddress;

	UINT m_nP2CANClient;
	UINT m_nP2SCANClient;
	UINT m_nP3CANClientPhys;
	UINT m_nP3CANClientFunc;
	UINT m_nS3Client;

	CApplicationLayer &m_applicationLayer;

	void _LoadConfig();
public:
	virtual void OnOK();
};
