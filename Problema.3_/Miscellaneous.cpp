#include "Miscellaneous.h"


std::string Miscellaneous::getInfo()
{
	return getName() + ": " + std::to_string(count) + " items";
}

void Miscellaneous::setCount(int count)
{
	this->count = count;
}
