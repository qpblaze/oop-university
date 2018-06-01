#pragma once
#include <string>

class Item
{
	std::string name;

public:
	virtual std::string getInfo() = 0;

	virtual std::string getName();
	virtual void setName(std::string name);
};
