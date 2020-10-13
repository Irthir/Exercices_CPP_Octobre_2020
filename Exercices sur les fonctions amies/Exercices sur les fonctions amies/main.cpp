#include <iostream>
#include "CPoint.h"
#include "CVecteur3d.h"
#include "CVect.h"
#include "CMatrice.h"

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

	//Exercice 83
	CVect vVecteur(8, 4, 1);
	Affichage(vVecteur);
	
	double dTab[3][3] = { 0 };
	for (int nI = 0; nI < 3; nI++)
	{
		for (int nJ = 0; nJ < 3; nJ++)
		{
			dTab[nI][nJ] = (int)(long)nI + nJ;
		}
	}
	CMatrice mMatrice(dTab);
	Affiche(mMatrice);

	CVect vResultat(0, 0, 0);
	vResultat = Prod(mMatrice, vVecteur);
	cout << "Leur produit donne le vecteur 3D : "<< endl;
	Affichage(vResultat);

	return 0;
}