#pragma once

class point
{
private:
	int x, y;
public:
	point(int abs = 0, int ord = 0);
	
	friend void Affiche(point &pPoint);
};