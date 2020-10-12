#include <iostream>
#include "CPoint.h"
#include "CVecteur3d.h"

using namespace std;

int main()
{
	//Exercice 81
	point* pPoint = new point(3,3); //point de classe dynamique
	point pPoing(4,4); //point de classe automatique

	Affiche(*pPoint);
	Affiche(pPoing);


	//Exercice 82
	vecteur3d VecteurA(4, 5, 6);
	vecteur3d VecteurB(7, 8, 9);

	if (coincide(VecteurA, VecteurB))
	{
		cout << "Les vecteurs A et B coincident." << endl;
	}
	else
	{
		cout << "Les vecteurs A et B ne coincident pas." << endl;
	}

	return 0;
}