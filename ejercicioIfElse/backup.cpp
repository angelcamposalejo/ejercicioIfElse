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
	double salida=0.0;
	if (entrada >= 100)
	{
		salida = entrada*.15;
	}
	else
	{
		salida = entrada*.20;
	}
	tbxAjuste.DoubleValue = salida;
}

