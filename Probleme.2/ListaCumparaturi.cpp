#define _CRT_SECURE_NO_WARNINGS

#include "ListaCumparaturi.h"
#include <iostream>
#include <cstring>

ListaCumparaturi::ListaCumparaturi()
{
	Count = 0;
}

ListaCumparaturi::ListaCumparaturi(char const* name, int quantity)
	: ListaCumparaturi()
{
	Items[Count++] = Cumparaturi(name, quantity);
}

ListaCumparaturi& ListaCumparaturi::operator+=(const Cumparaturi& item)
{
	Items[Count++] = item;

	return *this;
}

ListaCumparaturi& ListaCumparaturi::operator-=(char const* name)
{
	int poz = Count + 1;
	for(int i = 0; i < Count; i++)
	{
		if (strcmp(Items[i].Name, name) == 0)
		{
			poz = i;
			break;
		}
	}

	for(int i = poz; i < Count - 1; i++)
	{
		Items[i] = Items[i + 1];
	}
	Count--;

	return *this;
}

ListaCumparaturi& ListaCumparaturi::operator|(const ListaCumparaturi& list)
{
	for(int i = 0; i < list.Count; i++)
	{
		bool exists = false;
		for(int j = 0; j < Count; j++)
		{
			if(strcmp(Items[j].Name, list.Items[i].Name) == 0)
			{
				Items[j].Quantity += list.Items[i].Quantity;
				exists = true;
			}
		}

		if(!exists)
			Items[Count++] = list.Items[i];
	}

	return *this;
}

void ListaCumparaturi::Print()
{
	for (int i = 0; i < Count; i++)
	{
		Items[i].Print();
		std::cout << std::endl;
	}
}
