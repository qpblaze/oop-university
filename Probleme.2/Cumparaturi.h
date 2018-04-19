#pragma once
class Cumparaturi
{
public:
	char * Name;
	int Quantity;

	Cumparaturi();
	Cumparaturi(const char* name, int q);

	void Print() const;
};