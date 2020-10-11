#include <iostream>
#include "vecteur3d.h"
#include "vecteur3d_exo72.h"
#include "point.h"

using namespace std;

void AfficheVecteur3D(cVecteur3d vVecteur);

void TestComptePoint();

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

	//Question 73)
	cout << "Nous allons creer des points pour tester notre fonction nombre qui renvoie le nombre de points dans le programme." << endl;
	TestComptePoint();
	cout << "Nombre de points après la destruction du tableau : " << CPoint::Nombre() << endl;

	return 0;
}

void AfficheVecteur3D(cVecteur3d vVecteur)
//BUT : Afficher le contenu d'un vecteur 3D.
//ENTREE : Le vecteur 3D à afficher.
//SORTIE : Les composantes du vecteur 3D affichées dans la console.
{
	cout << "Notre vecteur 3D a pour valeurs : X = "<< vVecteur.getX() <<" Y = " << vVecteur.getY() << " Z = " << vVecteur.getZ() << endl;
}

void TestComptePoint()
//BUT : Créer des points et afficher leur nombre pour qu'ils soient détruits en fin de procédure.
//ENTREE : Une constante valant 10.
//SORTIE : La création des points avant leur destruction en fin de la procédure.
{
	const int NOMBREPOINT = 10;
	cout << "Nombre de points avant la creation du tableau : " << CPoint::Nombre() << endl;
	CPoint tabPoint[NOMBREPOINT];
	cout << "Nombre de points après la creation du tableau : " << CPoint::Nombre() << endl;
}