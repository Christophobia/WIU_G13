#pragma once

class Entity //an entity is any space on the map that isn't blank
{
protected:

	int x, y;
	int id;
	char icon;


public:
	static int total_entities;
	static Entity* entity_list[];

	Entity(int x, int y, char icon);
	~Entity();

	int getX() const;
	int getY() const;
	char getIcon() const;

	void setPos(int new_x, int new_y);
};

