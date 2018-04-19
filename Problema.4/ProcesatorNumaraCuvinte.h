#pragma once
#include "Procesator.h"
#include "Cuvant.h"

class ProcesatorNumaraCuvinte : public Procesator
{
	Cuvant Cuvinte[256];
	int Count;

public:
	ProcesatorNumaraCuvinte();

	void Proceseaza(const char* text) override;
	void Print() override;
};

