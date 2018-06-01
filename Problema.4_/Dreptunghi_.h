#pragma once
#include "Forma_.h"
class Dreptunghi_ :
	public Forma_
{
protected:
	int x, y, lungime, latime;

public:
	void set(int x, int y, int lungime, int latime);
	void Paint() override;
};

