#pragma once
#include "Forma_.h"
class Oval :
	public Forma_
{
	int x;
	int y;
	int raza1;
	int raza2;

public:
	void set(int x, int y, int raza1, int raza2);
	void Paint() override;
};

