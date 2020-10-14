#include <iostream>
#include "vecteur3d.h"
#include "vec3d.h"

using namespace std;

int main()
{
	//Exercice 84
	vecteur3d vVec(5, 5, 7);
	vecteur3d vVec2(7, 5, 7);
	cout << (vVec == vVec2) << endl;
	cout << (vVec != vVec2) << endl;
	
	//Exercice 85
	vVec = vVec + vVec2;
	vVec.affiche();
	vVec2.affiche();
	float fScalaire = vVec * vVec2;
	cout << "Produit scalaire de nos deux vecteurs : "<< fScalaire<<endl;

	//Exercice 86
	vec3d monVec;
	monVec[1] = 3;
	cout << monVec[1] << endl;

	return 0;
}