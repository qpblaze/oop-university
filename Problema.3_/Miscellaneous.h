#pragma once
#include "Item.h"

class Miscellaneous: public Item
{
	int count;
public:

	std::string getInfo() override;
	void setCount(int count);
};

