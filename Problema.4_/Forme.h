#pragma once
#include <vector>
#include "Forma_.h"

class Forme: public Forma_
{
	std::vector<Forma_*> forme;

public:
	void Add(Forma_* forma);
	void Paint() override;
};

