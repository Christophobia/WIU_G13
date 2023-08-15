#pragma once
#include "Map.h"

class Entity
{
protected:

	int x, y;
	char icon;


public:
	static int total_entities;

	Entity(int x, int y, char icon);

	int getX() const;
	int getY() const;
	char getIcon() const;

	void setPos(int new_x, int new_y);
};

