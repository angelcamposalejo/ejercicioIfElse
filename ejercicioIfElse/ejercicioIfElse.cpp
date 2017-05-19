#include "stdafx.h"  //________________________________________ ejercicioIfElse.cpp
#include "ejercicioIfElse.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	ejercicioIfElse app;
	return app.BeginDialog(IDI_ejercicioIfElse, hInstance);
}

void ejercicioIfElse::Window_Open(Win::Event& e)
{

}

void ejercicioIfElse::btCalcular_Click(Win::Event& e)
{
	const double entrada = tbxEntrada.DoubleValue;
	double z = 30.0;
	if (entrada >= 10)
	{
		z = 15.0;
	}
	else
	{
		z = 222.2;
	}
	this->Text = Sys::Convert::ToString(z);
}

