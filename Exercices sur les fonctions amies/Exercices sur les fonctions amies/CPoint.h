#pragma once

class point
{
private:
	int x, y;
public:
	point(int abs = 0, int ord = 0);
	
	//Exercice 81
	friend void Affiche(point &pPoint);
};