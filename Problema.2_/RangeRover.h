#pragma once
#include "SUV.h"

class RangeRover: public SUV
{
	int consum;

public:
	std::string getName() override;
	int getConsum() override;

	void setConsum(int consum);
};

