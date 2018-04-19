#define _CRT_SECURE_NO_WARNINGS

#include "Paragraf.h"
#include <cstring>

Paragraf::Paragraf()
{
	Text = nullptr;
}

Paragraf::Paragraf(const char* text)
{
	Text = new char[strlen(text) + 1];
	strcpy(Text, text);
}