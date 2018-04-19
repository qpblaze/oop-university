#pragma once
#include "Procesator.h"

class ProcesatorNumaraPropozitii : public Procesator
{
	int Count;
public:
	ProcesatorNumaraPropozitii();
	void Proceseaza(const char* text);
	void Print();
};

