#pragma once  //______________________________________ ejercicioIfElse.h  
#include "Resource.h"
class ejercicioIfElse : public Win::Dialog
{
public:
	ejercicioIfElse()
	{
	}
	~ejercicioIfElse()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Textbox tbxEntrada;
	Win::Button btCalcular;
	Win::Textbox tbxAjuste;
	Win::Label lb1;
	Win::Label lb2;
	Win::Label lb3;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(324);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(88);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"ejercicioIfElse";
		tbxEntrada.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 71, 14, 133, 25, hWnd, 1000);
		btCalcular.Create(NULL, L"Calcular", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 238, 10, 79, 28, hWnd, 1001);
		tbxAjuste.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_READONLY | ES_LEFT | ES_WINNORMALCASE, 70, 52, 133, 25, hWnd, 1002);
		lb1.Create(NULL, L"Presi�n", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 7, 18, 63, 25, hWnd, 1003);
		lb2.Create(NULL, L"Ajuste", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 7, 56, 61, 25, hWnd, 1004);
		lb3.Create(NULL, L"atm", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 202, 17, 23, 25, hWnd, 1005);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		tbxEntrada.Font = fontArial014A;
		btCalcular.Font = fontArial014A;
		tbxAjuste.Font = fontArial014A;
		lb1.Font = fontArial014A;
		lb2.Font = fontArial014A;
		lb3.Font = fontArial014A;
	}
	//_________________________________________________
	void btCalcular_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btCalcular.IsEvent(e, BN_CLICKED)) {btCalcular_Click(e); return true;}
		return false;
	}
};
