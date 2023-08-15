#include "Entity.h"

int Entity::total_entities = 0;


Entity::Entity(int x, int y, char icon)
{
	this->x = x;
	this->y = y;
	this->icon = icon;
	total_entities++;
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