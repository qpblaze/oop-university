#include "ListaParagrafe.h"
#include <iostream>

ListaParagrafe::ListaParagrafe()
{
	Count = 0;
}

void ListaParagrafe::Add(const char* text)
{
	Paragrafe[Count++] = Paragraf(text);
}

const Paragraf* ListaParagrafe::begin() const
{
	return &Paragrafe[0];
}

const Paragraf* ListaParagrafe::end() const
{
	return  &Paragrafe[Count];
}
