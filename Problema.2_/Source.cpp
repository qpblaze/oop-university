#include <cstdlib>
#include <iostream>
#include "MasinaOras.h"
#include "Opel.h"

using namespace std;

int main()
{
	Opel o;
	o.setCapacitate(100);
	o.setCuloare("rosu");
	o.setAnFabricatie(2000);
	
	MasinaOras *m = &o;
	cout << m->getName() << ", " << m->getCuloare() << ", " << m->getCapacitate() << ", " << o.getAnFabricatie() << endl;

	cout << endl;
	system("pause");
	return 0;
}
