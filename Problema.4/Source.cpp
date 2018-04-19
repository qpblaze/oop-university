#include <cstdlib>
#include <iostream>
#include "ListaParagrafe.h"
#include "Procesator.h"
#include "ProcesatorNumaraCuvinte.h"
#include "ProcesatorNumaraPropozitii.h"

using namespace std;

int main()
{
	ListaParagrafe L = ListaParagrafe();

	L.Add("Ce usor e testul la C++!");
	L.Add("Ce faci? Bine, tu Ce faci? Tot Bine.");

	Procesator *P = new ProcesatorNumaraCuvinte();
	Procesator *P2 = new ProcesatorNumaraPropozitii();

	for(const auto paragraf: L)
	{
		P->Proceseaza(paragraf.Text);
		P2->Proceseaza(paragraf.Text);
	}

	P->Print();
	cout << endl;
	P2->Print();

	delete P;
	delete P2;

	for (const auto paragraf : L)
	{
		cout << paragraf.Text << endl;
	}

	cout << endl;
	system("pause");
	return 0;
}
