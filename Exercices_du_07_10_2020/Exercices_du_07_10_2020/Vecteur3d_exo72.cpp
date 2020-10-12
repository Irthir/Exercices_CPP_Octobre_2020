#include "vecteur3d_exo72.h"
#include <iostream>

using namespace std;

//Le constructeur de notre classe :
Vecteur3d_exo72::Vecteur3d_exo72(float fX, float fY, float fZ)
{
	this->m_fX = fX;
	this->m_fY = fY;
	this->m_fZ = fZ;
}

void const Vecteur3d_exo72::Affichage()
//BUT : Afficher les composantes de notre vecteur 3D.
//ENTREE : Notre vecteur 3D.
//SORTIE : Les 3 composantes du vecteur sous la forme : "<composante1, composante2, composante3>".
{
	cout << "<" << this->m_fX << ", " << this->m_fY << ", " << this->m_fZ << ">" << endl;
}

Vecteur3d_exo72 const Vecteur3d_exo72::Somme(Vecteur3d_exo72 &vecteur2)
//BUT : Renvoyer la somme de deux vecteurs.
//ENTREE : Notre vecteur et le vecteur qu'on va lui additionner.
//SORTIE : Le vecteur somme.
{
	Vecteur3d_exo72 vecteurSomme(this->m_fX + vecteur2.m_fX, this->m_fY + vecteur2.m_fY, this->m_fZ + vecteur2.m_fZ);

	return vecteurSomme;
}

float const Vecteur3d_exo72::Scalaire(Vecteur3d_exo72 &vecteur2)
//BUT : Renvoyer le produit scalaire de deux vecteurs.
//ENTREE : Notre vecteur et le vecteur avec lequel nous allons créer un produit.
//SORTIE : Le produit scalaire.
{
	float fScalaire = this->m_fX * vecteur2.m_fX + this->m_fY * vecteur2.m_fY + this->m_fZ * vecteur2.m_fZ;

	return fScalaire;
}

