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
	: Cumparaturi()
{
	strcpy(Name, name);
	Quantity = q;
}

Cumparaturi::~Cumparaturi()
{
	delete[] Name;
}

void Cumparaturi::Print() const
{
	std::cout << Name << ": " << Quantity;
}

char const* Cumparaturi::GetName() const
{
	return Name;
}
