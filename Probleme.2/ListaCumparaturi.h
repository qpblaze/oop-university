#pragma once
#include "Cumparaturi.h"

class ListaCumparaturi
{
	Cumparaturi Items[256];
	int Count;

public:
	ListaCumparaturi();
	ListaCumparaturi(char const * name, int quantity);

	ListaCumparaturi& operator+=(const Cumparaturi& item);
	ListaCumparaturi& operator-=(char const * name);
	ListaCumparaturi& operator| (const ListaCumparaturi& list);

	void Print();
};

