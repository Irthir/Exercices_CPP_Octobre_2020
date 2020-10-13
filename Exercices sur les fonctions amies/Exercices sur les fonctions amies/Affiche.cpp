#include "CPoint.h"
#include "CVect.h"
#include "CMatrice.h"
#include <iostream>
using namespace std;

//Exercice 81
void Affiche(point &pPoint)
{
	cout << "Notre point a pour coordonnees : X = " << pPoint.x << " Y = " << pPoint.y << endl;
}

//Exercice 83
void const Affichage(CVect vVect)
{
	cout << "Notre Vecteur 3D a pour valeurs : X = " << vVect.m_dX << " Y = " << vVect.m_dY << " Z = " << vVect.m_dZ << endl;
}

void const Affiche(CMatrice mMatrice)
{
	cout << "Notre Matrice a pour valeurs : " << endl;
	for (int nI = 0; nI < 3; nI++)
	{
		for (int nJ = 0; nJ < 3; nJ++)
		{
			cout << mMatrice.m_dMatrice[nI][nJ] << " ";
		}
		cout << endl;
	}
}