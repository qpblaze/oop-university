#include "Forme.h"
#include <iostream>

void Forme::Add(Forma_* forma)
{
	this->forme.push_back(forma);
}

void Forme::Paint()
{
	for (auto frm : forme)
	{
		frm->Paint();
		std::cout << std::endl;
	}
}
