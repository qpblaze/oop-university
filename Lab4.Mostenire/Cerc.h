#pragma once
#include "Forma.h"

class Cerc : public Forma {

	int Raza;

public:

	Cerc(int raza);

	double ComputeArea() override;

	const char * GetName() override;

};
