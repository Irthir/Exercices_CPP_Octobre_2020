#include <iostream>
#include "vecteur3d.h"
#include "vec3d.h"
#include "set_int.h"
#include "vecteur3d_exo89.h"
#include "vect.h"

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

	//Exercice 87
	set_int siNumero1(100);
	set_int siNumero2(100);
	for (int nI = 0; nI < 50; nI++)
	{
		siNumero1.ajout(nI);
	}
	siNumero2 = siNumero1 = siNumero2 = siNumero1;
	siNumero1.affiche();
	siNumero2.affiche();

	//Exercice 88
	siNumero1 < 4250;
	if (siNumero1[4250])
		siNumero1.affiche();
	
	//Exercice 89
	//Voir les fichiers vecteur3d_exo89

	//Exercice 90


	return 0;
}