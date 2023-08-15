#include <iostream>
#include <Windows.h>

#include "Map.h"
#include "Entity.h"

int main()
{
	Map* test_map = new Map(5, 5);

	Entity* things[1];
	things[0] = new Entity(0, 0, 'T');

	while (1) {
		test_map->Render(things);
		things[0]->setPos(things[0]->getX() + 1, things[0]->getY() + 1);
		system("pause");
	}
}