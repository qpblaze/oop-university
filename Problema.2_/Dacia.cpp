#include "Dacia.h"

std::string Dacia::getName()
{
	return "Dacia";
}

int Dacia::getCapacitate()
{
	return capacitate;
}

std::string Dacia::getCuloare()
{
	return culoare;
}

void Dacia::setCapacitate(int capacitate)
{
	this->capacitate = capacitate;
}

void Dacia::setCuloare(std::string culoare)
{
	this->culoare = culoare;
}
