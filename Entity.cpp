#include "Entity.h"

int Entity::total_entities = 0;
Entity* Entity::entity_list[9999];


Entity::Entity(int x, int y, char icon)
{
	this->x = x;
	this->y = y;
	this->icon = icon;

	for (int i = 0; i < 9999; i++) {
		if (entity_list[i] == nullptr) {
			this->id = i;
			break;
		}
	}
	total_entities++;
}

Entity::~Entity() {
	total_entities--;
}

int Entity::getX() const
{
	return this->x;
}

int Entity::getY() const
{
	return this->y;
}

char Entity::getIcon() const
{
	return this->icon;
}

void Entity::setPos(int new_x, int new_y)
{
	this->x = new_x;
	this->y = new_y;
}