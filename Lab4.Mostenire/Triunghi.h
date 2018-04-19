#pragma once
#include "Forma.h"

class Triunghi : public Forma {

	int X1, Y1, X2, Y2, X3, Y3;
	double GetDistance(int x1, int y1, int x2, int y2);

public:

	Triunghi(int x1, int y1, int x2, int y2, int x3, int y3);

	double ComputeArea();

	const char * GetName();

};
