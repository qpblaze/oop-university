#pragma once
#include "Message.h"
#include <vector>

class WhiteBoard: public Message
{
private:
	int x;
	int y;
	std::string	text;
	std::string culoare;

	std::vector<Message*> alte_mesaje;
	Message* parent;

public:
	WhiteBoard(Message* parent, int x, int y, std::string message, std::string culoare);

	void Afiseaza() override;
	void Attach(Message* message) override;
	int GetX() override;
	int GetY() override;
	std::string GetContent() override;
};

