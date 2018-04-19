#include "Dreptunghi.h"

Dreptunghi::Dreptunghi(int lungime, int latime)
{
	Latime = latime;
	Lungime = lungime;
}

const char* Dreptunghi::GetName()
{
	return "Dreptunghi\n";
}

double Dreptunghi::ComputeArea()
{
	return Latime * Lungime;
}
