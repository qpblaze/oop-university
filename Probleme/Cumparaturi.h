#pragma once
class Cumparaturi
{
	char * Name;
	int Quantity;
public:
	Cumparaturi();
	Cumparaturi(const char* name, int q);

	~Cumparaturi();

	void Print() const;
	char const * GetName() const;
};