#pragma once
#include "Item.h"
class Food: public Item
{
	float quantity;

public:
	std::string getInfo() override;
	void setQuantity(float quantity);
};

