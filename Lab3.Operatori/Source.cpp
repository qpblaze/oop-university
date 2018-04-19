#include <cstdlib>
#include <iostream>
#include "../Probleme.2/Cumparaturi.h"
#include "../Probleme.2/ListaCumparaturi.h"

using namespace std;

int main()
{
	ListaCumparaturi l;

	(l += Cumparaturi("paine", 5)) += Cumparaturi("peste", 2);
	l.Print();
	cout << endl;

	l -= "peste";
	l.Print();
	cout << endl;

	ListaCumparaturi l2;
	l2 += Cumparaturi("lapte", 4);
	l2 += Cumparaturi("paine", 10);
	(l | l2).Print();

	cout << endl;
	system("pause");
	return 0;
}
