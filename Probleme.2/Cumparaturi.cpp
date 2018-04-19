#define _CRT_SECURE_NO_WARNINGS
#include "Cumparaturi.h"
#include <cstring>
#include <iostream>

Cumparaturi::Cumparaturi()
{
	Name = nullptr;
	Quantity = 0;
}

Cumparaturi::Cumparaturi(const char* name, int q)
{
	Name = new char[strlen(name) + 1];
	Quantity = q;

	strcpy(Name, name);
}

void Cumparaturi::Print() const
{
	std::cout << Name << ": " << Quantity;
}