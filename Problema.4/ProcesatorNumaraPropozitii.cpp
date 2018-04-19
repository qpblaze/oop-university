#define _CRT_SECURE_NO_WARNINGS

#include "ProcesatorNumaraPropozitii.h"
#include <iostream>


ProcesatorNumaraPropozitii::ProcesatorNumaraPropozitii()
{
	Count = 0;
}

void ProcesatorNumaraPropozitii::Proceseaza(const char* text)
{
	char *copyText = new char[strlen(text) + 1];
	strcpy(copyText, text);

	char *p = strtok(copyText, ".?!");
	while(p)
	{
		Count++;
		p = strtok(NULL, ".?!");
	}
}

void ProcesatorNumaraPropozitii::Print()
{
	std::cout << Count << " propozitii." << std::endl;
}
