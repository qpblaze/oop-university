#include "Cerc_.h"
#include <iostream>
#include <string>

void Cerc_::set(int x, int y, int raza)
{
	this->x = x;
	this->y = y;

	this->raza = raza;
}

void Cerc_::Paint()
{
	std::cout << "Cerc" << std::endl;
	std::cout << "X: " << std::to_string(x) << std::endl;
	std::cout << "Y: " << std::to_string(y) << std::endl;
	std::cout << "Raza: " << std::to_string(raza) << std::endl;
}
