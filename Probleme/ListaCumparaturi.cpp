#define _CRT_SECURE_NO_WARNINGS

#include "ListaCumparaturi.h"
#include <iostream>

ListaCumparaturi::ListaCumparaturi()
{
	Count = 0;
}

ListaCumparaturi::ListaCumparaturi(char const* name, int quantity)
	: ListaCumparaturi()
{
	Items[Count++] = Cumparaturi(name, quantity);
}

ListaCumparaturi::~ListaCumparaturi()
{
	delete[] Items;
}

void ListaCumparaturi::operator+=(Cumparaturi& item)
{
	Items[Count++] = item;
}

void ListaCumparaturi::operator-=(char const* name)
{
	int poz = 0;
	for(int i = 0; i < Count; i++)
	{
		if (Items[i].GetName() == name)
		{
			poz = i;
			break;
		}
	}
}

void ListaCumparaturi::Print()
{
	for (const auto& item : Items)
	{
		item.Print();
		std::cout << std::endl;
	}
}
