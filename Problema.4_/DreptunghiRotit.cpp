#include "DreptunghiRotit.h"
#include <string>
#include <iostream>

void DreptunghiRotit::set(int x, int y, int lungime, int latime, int unghi)
{
	Dreptunghi_::set(x, y, lungime, latime);
	this->unghi = unghi;
}

void DreptunghiRotit::Paint()
{
	std::cout << "Dreptunghi rotit" << std::endl;
	std::cout << "X: " << std::to_string(x) << std::endl;
	std::cout << "Y: " << std::to_string(y) << std::endl;
	std::cout << "Latime: " << std::to_string(latime) << std::endl;
	std::cout << "Lungime: " << std::to_string(lungime) << std::endl;
	std::cout << "Unghi: " << std::to_string(unghi) << std::endl;

}
