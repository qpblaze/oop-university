#include "Dreptunghi_.h"
#include <string>
#include <iostream>

void Dreptunghi_::set(int x, int y, int lungime, int latime)
{
	this->x = x;
	this->y = y;

	this->latime = latime;
	this->lungime = lungime;
}

void Dreptunghi_::Paint()
{
	std::cout << "Dreptunghi " << std::endl;
	std::cout << "X: " << std::to_string(x) << std::endl;
	std::cout << "Y: " << std::to_string(y) << std::endl;
	std::cout << "Latime: " << std::to_string(latime) << std::endl;
	std::cout << "Lungime: " << std::to_string(lungime) << std::endl;
}
