
#define _CRT_SECURE_NO_WARNINGS
#include "MyString.h"
#include <cstring>

MyString::MyString()
{
	Size = 0;
	AllocatedSize = 16;
	sir = new char[AllocatedSize];
}

MyString::MyString(const char* text)
{
	Size = strlen(text);
	AllocatedSize = Size + 1;
	sir = new char[AllocatedSize];

	strcpy(sir, text);
}


MyString::~MyString()
{
	delete[] sir;
}

unsigned int MyString::GetSize()
{
	return Size;
}

void MyString::Set(const char* text)
{
	Size = strlen(text);

	if(AllocatedSize < Size)
	{
		AllocatedSize = Size + 1;
	}

	sir = new char[AllocatedSize];
	strcpy(sir, text);
}

void MyString::Set(MyString& m)
{
	Set(m.sir);
}

void MyString::Add(const char* text)
{
	Size = Size + strlen(text);

	if(AllocatedSize < Size)
	{
		AllocatedSize = Size * 2;
		
		char * copy = new char[Size];
		strcpy(copy, sir);

		sir = new char[AllocatedSize];
		strcpy(sir, copy);
	}

	strcat(sir, text);
}

void MyString::Add(MyString& m)
{
	Add(m.sir);
}

const char* MyString::GetText()
{
	return sir;
}



