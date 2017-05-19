#include "stdafx.h"  //________________________________________ ejercicioIfElse.cpp
#include "ejercicioIfElse.h"

wstring texto;
int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	ejercicioIfElse app;
	return app.BeginDialog(IDI_ejercicioIfElse, hInstance);
}

void ejercicioIfElse::Window_Open(Win::Event& e)
{
	this->radioCentimetros.Checked = true;
	this->radioPulgadas.Checked = false;
	texto = L"cm";
	lb3.Text = texto;
	texto = L"in";
	lb2.Text = texto;
}

void ejercicioIfElse::btCalcular_Click(Win::Event& e)
{
	const bool isPulgadas = radioPulgadas.Checked;
	const bool isCentimetros = radioCentimetros.Checked;
	const double entrada = tbxEntrada.DoubleValue;
	double salida;
	if (isCentimetros == 1)
	{
		salida = entrada / 0.393701;

	}
	else
	{
		salida = entrada*0.393701;
	}
	tbxSalida.DoubleValue = salida;
}

void ejercicioIfElse::radioCentimetros_Click(Win::Event& e)
{
	texto = L"cm";
	lb3.Text = texto;
	texto = L"in";
	lb2.Text = texto;
}

void ejercicioIfElse::radioPulgadas_Click(Win::Event& e)
{
	texto = L"in";
	lb3.Text = texto;
	texto = L"cm";
	lb2.Text = texto;
}

