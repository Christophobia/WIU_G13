#pragma once

class Map
{
private:

	int width, height;
	char* map[];

public:

	Map(int w, int h);
	void Render();
};