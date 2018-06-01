#include "Food.h"

std::string Food::getInfo()
{
	return getName() + ": " + std::to_string(quantity) + " kg";
}

void Food::setQuantity(float quantity)
{
	this->quantity = quantity;
}
