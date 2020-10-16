#include "vecteur3d_exo89.h"
#include <iostream>

using namespace std;

//Avec cet op�rateur, la valeur est en lecture seule.
float vector3d::operator[](int const nX) const
{
	if (0 <= nX && nX < TAILLE)
	{
		return this->v[nX];
	}
	cout << "Erreur depassement de Tableau." << endl;
	return 0.0f;
}

//Avec cet op�rateur, la valeur est en lecture et �criture.
float& vector3d::operator[](int const nX)
{
	if (0 <= nX && nX < TAILLE)
	{
		return this->v[nX];
	}
	cout << "Erreur depassement de Tableau." << endl;
	exit;
}
