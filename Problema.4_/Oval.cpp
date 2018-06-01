#include "Oval.h"
#include <iostream>
#include <string>

void Oval::set(int x, int y, int raza1, int raza2)
{
	this->x = x;
	this->y = y;

	this->raza1 = raza1;
	this->raza2 = raza2;
}

void Oval::Paint()
{
	std::cout << "Oval " << std::endl;
	std::cout << "X: "<<std::to_string(x) << std::endl;
	std::cout << "Y: " << std::to_string(y) << std::endl;
	std::cout << "Raza 1: " << std::to_string(raza1) << std::endl;
	std::cout << "Raza 2: " << std::to_string(raza2) << std::endl;
}
