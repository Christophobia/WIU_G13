#include "Map.h"
#include "Entity.h"
#include <iostream>


Map::Map(int w, int h) 
{
	this->height = h;
	this->width = w;
	*this->map = new char[height * width];
}

void Map::Render()
{
	for (int c = 0; c < height; c++) {
		for (int r = 0; r < width; r++) {
			
			for (int i = 0; i < Entity::total_entities; i++) {
				if (Entity::entity_list[i] == nullptr) continue;
				if (Entity::entity_list[i]->getY() == c and Entity::entity_list[i]->getX() == r) {
					std::cout << Entity::entity_list[i]->getIcon();
				}
				else std::cout << '-';
			}

			if (r < width - 1) std::cout << " ";
		}
		std::cout << std::endl;
	}
}