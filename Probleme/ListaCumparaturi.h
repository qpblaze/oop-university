#pragma once
#include "Cumparaturi.h"

class ListaCumparaturi
{
	Cumparaturi Items[256];
	int Count;

public:
	ListaCumparaturi();
	ListaCumparaturi(char const * name, int quantity);

	~ListaCumparaturi();

	void operator+=(Cumparaturi& item);
	void operator-=(char const * name);

	void Print();
};

