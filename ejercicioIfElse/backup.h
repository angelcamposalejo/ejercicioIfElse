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
	Win::Textbox tbxSalida;
	Win::Label lb1;
	Win::Label lb2;
	Win::Label lb3;
	Win::Button gbox1;
	Win::Button radioCentimetros;
	Win::Button radioPulgadas;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(544);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(297);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"ejercicioIfElse";
		tbxEntrada.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 71, 14, 133, 25, hWnd, 1000);
		btCalcular.Create(NULL, L"Convertir", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 238, 10, 79, 28, hWnd, 1001);
		tbxSalida.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_READONLY | ES_LEFT | ES_WINNORMALCASE, 333, 13, 133, 25, hWnd, 1002);
		lb1.Create(NULL, L"Entrada", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 7, 18, 63, 25, hWnd, 1003);
		lb2.Create(NULL, L"In", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 476, 14, 61, 25, hWnd, 1004);
		lb3.Create(NULL, L"cm", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 206, 15, 23, 25, hWnd, 1005);
		gbox1.Create(WS_EX_TRANSPARENT, L"Convertir a", WS_CHILD | WS_VISIBLE | BS_GROUPBOX, 113, 91, 363, 199, hWnd, 1006);
		radioCentimetros.Create(NULL, L"Centimetros", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_AUTORADIOBUTTON | BS_LEFT | BS_VCENTER, 162, 124, 131, 26, hWnd, 1007);
		radioPulgadas.Create(NULL, L"Pulgadas", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_AUTORADIOBUTTON | BS_LEFT | BS_VCENTER, 161, 169, 133, 26, hWnd, 1008);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		tbxEntrada.Font = fontArial014A;
		btCalcular.Font = fontArial014A;
		tbxSalida.Font = fontArial014A;
		lb1.Font = fontArial014A;
		lb2.Font = fontArial014A;
		lb3.Font = fontArial014A;
		gbox1.Font = fontArial014A;
		radioCentimetros.Font = fontArial014A;
		radioPulgadas.Font = fontArial014A;
	}
	//_________________________________________________
	void btCalcular_Click(Win::Event& e);
	void radioCentimetros_Click(Win::Event& e);
	void radioPulgadas_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btCalcular.IsEvent(e, BN_CLICKED)) {btCalcular_Click(e); return true;}
		if (radioCentimetros.IsEvent(e, BN_CLICKED)) {radioCentimetros_Click(e); return true;}
		if (radioPulgadas.IsEvent(e, BN_CLICKED)) {radioPulgadas_Click(e); return true;}
		return false;
	}
};
