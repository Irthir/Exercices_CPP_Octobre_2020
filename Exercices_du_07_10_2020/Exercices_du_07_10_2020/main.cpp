#include <iostream>
#include "vecteur3d.h"
#include "vecteur3d_exo72.h"

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

	//Question 71)
	cout << "La norme la plus grande parmis nos deux vecteur est : " << cVecteur3d::Normax(vVecteurDefaut, vVecteurDefini) << endl;


	//Question 72)
	//On crée d'abord deux vecteurs 1.1.1 et 2.2.2
	Vecteur3d_exo72 Vecteur1(1, 1, 1);
	Vecteur3d_exo72 Vecteur2(2, 2, 2);
	
	cout << "Affichage du Vecteur 1 :" << endl;
	Vecteur1.Affichage();
	
	cout << "Affichage du Vecteur 2 :" << endl;
	Vecteur2.Affichage();
	
	Vecteur3d_exo72 VecteurSomme;
	VecteurSomme = Vecteur1.Somme(Vecteur2);
	
	cout << "Affichage du Vecteur Somme :" << endl;
	VecteurSomme.Affichage();

	float fScalaire = 0.0f;
	fScalaire = Vecteur1.Scalaire(Vecteur2);

	cout << "Le produit scalaire du vecteur 1 par le vecteur 2 vaut : " << fScalaire << endl;

	return 0;
}

void AfficheVecteur3D(cVecteur3d vVecteur)
{
	cout << "Notre vecteur 3D a pour valeurs : X = "<< vVecteur.getX() <<" Y = " << vVecteur.getY() << " Z = " << vVecteur.getZ() << endl;
}