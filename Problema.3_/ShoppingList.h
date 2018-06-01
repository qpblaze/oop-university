#pragma once
#include <vector>
#include "Item.h"

class ShoppingList
{
	std::vector<Item*> items;

public:
	void addItem(Item* item);
	void printList();
};

