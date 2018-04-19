#pragma once
class Punct
{
	int X;
	int Y;

public:
	Punct();
	Punct(int x, int y);

	void afiseaza() const;

	double operator | (Punct point) const;
	bool operator == (Punct point) const;
};

