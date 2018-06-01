#include "RangeRover.h"

std::string RangeRover::getName()
{
	return "Range Rover";
}

int RangeRover::getConsum()
{
	return consum;
}

void RangeRover::setConsum(int consum)
{
	this->consum = consum;
}
