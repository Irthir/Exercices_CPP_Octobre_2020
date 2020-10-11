#include <iostream>
#include "vecteur3d.h"

using namespace std;

void AfficheVecteur3D(cVecteur3d vVecteur);

int main()
{
	//Question 69)
	//Création de deux vecteurs, un avec le constructeur par défaut et un autre dont les valeurs sont définis ici.
	cVecteur3d vVecteurDefaut;
	cVecteur3d vVecteurDefini(1,1,1);

	cout << "Affichage du Vecteur 1 : " << endl;
	AfficheVecteur3D(vVecteurDefaut);
	cout << "Affichage du Vecteur 2 : " << endl;
	AfficheVecteur3D(vVecteurDefini);
	
	//Question 70)
	cout << "Notre Vecteur 1 et notre Vecteur 2 sont identiques : " << endl;
	if (cVecteur3d::Coincide(&vVecteurDefaut, &vVecteurDefini)) //Passage par adresse.
		cout << "-Cela est vrai." << endl;
	else
		cout << "-Cela est faux." << endl;

	return 0;
}

void AfficheVecteur3D(cVecteur3d vVecteur)
{
	cout << "Notre vecteur 3D a pour valeurs : X = "<< vVecteur.getX() <<" Y = " << vVecteur.getY() << " Z = " << vVecteur.getZ() << endl;
}