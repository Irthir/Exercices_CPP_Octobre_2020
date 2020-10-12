#include <iostream>
#include"CPoint.h"

using namespace std;

int main()
{
	point* pPoint = new point(3,3); //point de classe dynamique
	point pPoing(4,4); //point de classe automatique

	Affiche(*pPoint);
	Affiche(pPoing);

	return 0;
}