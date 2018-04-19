#include "Multime.h"
#include <iostream>


Multime::Multime()
{
	Count = 0;
}

Multime::Multime(std::initializer_list<Punct> points)
	: Multime()
{
	for (const auto point : points)
	{
		if (!exists(point))
			Points[Count++] = point;
	}
}

void Multime::distanta_maxima_intre_puncte()
{
	double max = 0;
	for(int i = 0; i < Count - 1; i++)
	{
		for (int j = i; j < Count; j++)
		{
			const double dist = Points[i] | Points[j];
			if (dist > max)
				max = dist;
		}
	}

	std::cout << "Distanta maxima dintre 2 punte: " << max << std::endl;
}

void Multime::afiseaza() const
{
	for(int i =0; i < Count; i++)
	{
		Points[i].afiseaza();
	}
}

bool Multime::exists(Punct point) const
{
	for (int i = 0; i < Count; i++)
		if (Points[i] == point)
			return true;
	return false;
}

Multime& Multime::operator+=(Punct point)
{
	if (!exists(point))
		Points[Count++] = point;

	return *this;
}

Multime& Multime::operator-=(Punct point)
{
	int pos = 0;
	for (const auto p : Points)
	{
		pos++;
		if(p == point)
			break;
	}

	for(int i = pos; i < Count - 1; i++)
	{
		Points[i] = Points[i + 1];
	}

	Count--;

	return *this;
}

Multime& Multime::operator+=(Multime m)
{
	for (int i = 0; i < m.Count; i++)
	{
		if(!exists(m.Points[i]))
			Points[Count++] = m.Points[i];
	}

	return *this;
}
