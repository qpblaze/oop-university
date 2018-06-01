#include "WhiteBoard.h"
#include <iostream>

WhiteBoard::WhiteBoard(Message* parent, int x, int y, std::string message, std::string culoare)
{
	this->parent = parent;
	this->x = x;
	this->y = y;
	this->text = message;
	this->culoare = culoare;
}

void WhiteBoard::Afiseaza()
{
	std::cout << std::endl;
	std::cout << "Content: " << GetContent() << std::endl;
	std::cout << "Nr atasamente: " << alte_mesaje.size() << std::endl;

	if(parent)
		std::cout << "Contetnt parinte: " << parent->GetContent() << std::endl;

	for (auto mesaj : alte_mesaje)
	{
		mesaj->Afiseaza();
	}
}

void WhiteBoard::Attach(Message* message)
{
	alte_mesaje.push_back(message);
}

int WhiteBoard::GetX()
{
	return x;
}

int WhiteBoard::GetY()
{
	return y;
}

std::string WhiteBoard::GetContent()
{
	return text;
}
