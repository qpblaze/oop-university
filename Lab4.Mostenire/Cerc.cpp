#include "Cerc.h"

Cerc::Cerc(int raza)
{
	Raza = raza;
}

const char* Cerc::GetName()
{
	return "Cerc\n";
}

double Cerc::ComputeArea()
{
	double pi = 3.141592;
	return pi * (Raza * Raza);
}