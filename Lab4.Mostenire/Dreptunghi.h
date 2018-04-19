#pragma once
#include "Forma.h"

class Dreptunghi : public Forma {

	int Latime, Lungime;

public:

	Dreptunghi(int lungime, int latime);

	double ComputeArea() override;

	const char * GetName() override;

};
