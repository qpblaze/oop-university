#include <cstdlib>
#include <iostream>
#include "MyString.h"

using namespace std;

int main()
{
	MyString * my_string = new MyString();

	my_string->Set("da");
	cout << my_string->GetText() << endl;

	my_string->Add(" nene");
	cout << my_string->GetText() << endl;

	cout << endl;
	system("pause");
	return 0;
}
