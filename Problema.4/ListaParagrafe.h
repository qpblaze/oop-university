#pragma once
#include "Paragraf.h"

class ListaParagrafe
{
	Paragraf Paragrafe[256];
	int Count;
public:
	ListaParagrafe();

	void Add(const char* text);

	const Paragraf * begin() const;

	const Paragraf * end() const;
};

