#pragma once
#include "Forma_.h"
class Cerc_ :
	public Forma_
{
	int x;
	int y;
	int raza;

public:
	void set(int x, int y, int raza);
	void Paint() override;
};

