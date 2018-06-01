#pragma once
#include "Masina.h"

class SUV: public Masina
{
public:
	std::string getName() override;

	virtual int getConsum() = 0;
};