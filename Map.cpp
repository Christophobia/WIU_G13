#include "Map.h"
#include <iostream>


Map::Map(int w, int h) 
{
	this->height = h;
	this->width = w;
	*this->map = new char[height * width];
}

void Map::Render(Entity* entities[])
{
	for (int c = 0; c < height; c++) {
		for (int r = 0; r < width; r++) {
			
			for (int i = 0; i < Entity::total_entities; i++) {
				if (entities[i] == nullptr) continue;
				if (entities[i]->getY() == c and entities[i]->getX() == r) {
					std::cout << entities[i]->getIcon();
				}
				else std::cout << '-';
			}

			if (r < width - 1) std::cout << " ";
		}
		std::cout << std::endl;
	}
}