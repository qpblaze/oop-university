#include "Triunghi.h"
#include <cmath>

Triunghi::Triunghi(int x1, int y1, int x2, int y2, int x3, int y3)
{
	X1 = x1;
	X2 = x2;
	X3 = x3;
	Y1 = y1;
	Y2 = y2;
	Y3 = y3;
}

const char* Triunghi::GetName()
{
	return "Triunghi\n";
}

double Triunghi::ComputeArea()
{
	double a = GetDistance(X1, Y1, X2, Y2);
	double b = GetDistance(X2, Y2, X3, Y3);
	double c = GetDistance(X3, Y3, X1, Y1);

	double p = (a + b + c) / 2;

	return sqrt(p * (p - a) * (p - b) * (p - c));
}


double Triunghi::GetDistance(int x1, int y1, int x2, int y2)
{
	int distancex = (x2 - x1) * (x2 - x1);
	int distancey = (y2 - y1) * (y2 - y1);

	double distance = sqrt(distancex + distancey);

	return distance;
}
