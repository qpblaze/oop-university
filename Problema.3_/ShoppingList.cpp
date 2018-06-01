#include "ShoppingList.h"
#include <iostream>

void ShoppingList::addItem(Item* item)
{
	items.push_back(item);
}

void ShoppingList::printList()
{
	for (auto item : items)
	{
		std::cout << item->getInfo() << std::endl;
	}
}
