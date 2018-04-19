#include "Punct.h"
#include <cmath>
#include <iostream>

Punct::Punct()
{
	X = 0;
	Y = 0;
}

Punct::Punct(int x, int y)
{
	X = x;
	Y = y;
}

double Punct::operator | (Punct point) const
{
	return sqrt(pow(X - point.X, 2) + pow(Y - point.Y, 2));
}

bool Punct::operator==(Punct point) const
{
	return X == point.X && Y == point.Y;
}

void Punct::afiseaza() const
{
	std::cout << X << " " << Y << std::endl;
}
