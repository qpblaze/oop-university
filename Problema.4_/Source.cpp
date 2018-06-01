#include <cstdlib>
#include <iostream>
#include "Forme.h"
#include "Cerc_.h"
#include "Oval.h"
#include "DreptunghiRotit.h"

using namespace std;

int main()
{
	Forme f;

	Cerc_ c;
	c.set(10, 10, 100);

	Oval o;
	o.set(20, 20, 50, 100);

	DreptunghiRotit p;
	p.set(5, 5, 2, 10, 30);

	f.Add(&c);
	f.Add(&o);
	f.Add(&p);

	f.Paint();

	cout << endl;
	system("pause");
	return 0;
}
