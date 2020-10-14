#include "vec3d.h"
#include <iostream>

using namespace std;

float vec3d::operator[](int const nX) const
{
	if (0 <= nX && nX < TAILLE)
	{
		return this->v[nX];
	}
	cout << "Erreur depassement de Tableau."<<endl;
	return 0.0f;
}

float& vec3d::operator[](int const nX)
{
	if (0 <= nX && nX < TAILLE)
	{
		return this->v[nX];
	}
	cout << "Erreur depassement de Tableau." << endl;
	exit;
}
