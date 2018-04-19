#define _CRT_SECURE_NO_WARNINGS

#include "BigNumber.h"
#include <cstring>
#include <stdlib.h>

BigNumber::BigNumber()
{
	CharactersCount = 0;
}

BigNumber::BigNumber(int value)
{
	Set(value);
}

BigNumber::BigNumber(const char* number)
{
	Set(number);
}

BigNumber::BigNumber(const BigNumber& number)
{
	Set(number.Number);
}

bool BigNumber::Set(int value)
{
	CharactersCount = 0;
	int aux = value;
	while(value)
	{
		CharactersCount++;
		aux = aux / 10;
	}

	itoa(value, Number, 0);
}

bool BigNumber::Set(const char* number)
{
	CharactersCount = strlen(number);
	for (int i = 0; i < CharactersCount; i++)
	{
		Number[i] = number[i];
	}

	return true;
}