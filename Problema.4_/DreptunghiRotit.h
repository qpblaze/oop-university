#pragma once
#include "Dreptunghi_.h"
class DreptunghiRotit :
	public Dreptunghi_
{
	int unghi;
public:
	void set(int x, int y, int lungime, int latime, int unghi);
	void Paint() override;
};

