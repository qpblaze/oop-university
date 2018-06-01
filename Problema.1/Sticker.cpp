#include "Sticker.h"
#include <iostream>

Sticker::Sticker(Message* parent, int x, int y, std::string message, std::string culoare)
{
	this->parent = parent;
	this->x = x;
	this->y = y;
	this->text = message;
	this->culoare = culoare;
}

void Sticker::Afiseaza()
{
	std::cout << std::endl;
	std::cout << "Content: " << GetContent() << std::endl;
	std::cout << "Culoare: " << culoare << std::endl;
	std::cout << "X: " << GetX() << std::endl;
	std::cout << "Y: " << GetY() << std::endl;
	std::cout << "Nr atasamente: " << alte_mesaje.size() << std::endl;

	if (parent)
		std::cout << "Contetnt parinte: " << parent->GetContent() << std::endl;

	for (auto mesaj : alte_mesaje)
	{
		mesaj->Afiseaza();
	}
}

void Sticker::Attach(Message* message)
{
	alte_mesaje.push_back(message);
}

int Sticker::GetX()
{
	return x;
}

int Sticker::GetY()
{
	return y;
}

std::string Sticker::GetContent()
{
	return text;
}
