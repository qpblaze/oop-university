#define _CRT_SECURE_NO_WARNINGS

#include "Cuvant.h"
#include <cstring>


Cuvant::Cuvant()
{
	Count = 0;
}

Cuvant::Cuvant(const char* text)
{
	Count = 1;

	Value = new char[strlen(text) + 1];
	strcpy(Value, text);
}
