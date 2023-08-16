#include <iostream>
#include <Windows.h>

#include "Map.h"
#include "Entity.h"

int main()
{
	Map* test_map = new Map(30, 20);

	Entity* test_entity = new Entity(0, 0, 'T');

	while (1) {
		test_map->Render();
		test_entity->setPos(test_entity->getX() + 1, test_entity->getY());
		system("pause");
		system("cls");
	}
}