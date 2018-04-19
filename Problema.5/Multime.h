#pragma once
#include "Punct.h"
#include <initializer_list>

class Multime
{
	Punct Points[256];
	int Count;

public:
	Multime();
	Multime(std::initializer_list<Punct> points);

	void distanta_maxima_intre_puncte();
	void afiseaza() const;
	bool exists(Punct point) const;

	Multime& operator += (Punct point);
	Multime& operator -= (Punct point);

	Multime& operator += (Multime m);
};

