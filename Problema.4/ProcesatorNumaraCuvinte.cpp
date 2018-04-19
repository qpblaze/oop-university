#define _CRT_SECURE_NO_WARNINGS

#include "ProcesatorNumaraCuvinte.h"
#include <cstring>
#include <iostream>

ProcesatorNumaraCuvinte::ProcesatorNumaraCuvinte()
{
	Count = 0;
}

void ProcesatorNumaraCuvinte::Proceseaza(const char* text)
{
	char *copyText = new char[strlen(text) + 1];
	strcpy(copyText, text);

	char *p = strtok(copyText, " ,.?!");
	while (p)
	{
		bool exists = false;
		for (int i = 0; i < Count; i++)
		{
			if (strcmp(Cuvinte[i].Value, p) == 0)
			{
				exists = true;
				Cuvinte[i].Count++;
			}
		}

		if (!exists)
			Cuvinte[Count++] = Cuvant(p);

		p = strtok(nullptr, " ,.?!");
	}
}

void ProcesatorNumaraCuvinte::Print()
{
	for(int i = 0; i < Count; i++)
	{
		std::cout << Cuvinte[i].Value << ": " << Cuvinte[i].Count << std::endl;
	}
}
