#include "vecteur3d.h"
#include <math.h>

//Question 69) a)

//Le constructeur par d�faut :
/*cVecteur3d::cVecteur3d()
//BUT : Cr�er un vecteur 3D sans arguments.
//ENTREE : N/A
//SORTIE : Un vecteur 3D cr�� avec ses composants � 0.
{
	this->m_fX = 0;
	this->m_fY = 0;
	this->m_fZ = 0;
}*/

//Les autres d�finitions du constructeur :
/*cVecteur3d::cVecteur3d(float fX, float fY, float fZ)
//BUT : Cr�er un vecteur 3D en pr�cisant ses coordonn�es.
//ENTREE : Les valeurs en X,Y et Z du vecteur 3D.
//SORTIE : Un vecteur 3D cr��.
{
	this->m_fX = fX;
	this->m_fY = fY;
	this->m_fZ = fZ;
}*/

//Question 69) b)
//On r�utilise la fonction pr�c�dente pour d�finir le prototype du fichier source.


//Question 70) a)
bool cVecteur3d::Coincide(cVecteur3d v1, cVecteur3d v2)
//BUT : Comparer deux vecteurs et renvoyer un bool�en selon si ils sont confondus ou non.
//ENTREE : Deux vecteurs.
//SORTIE : Vrai si ils sont confonuds, Faux dans le cas contraire.
{
	return ((v1.getX() == v2.getX()) && (v1.getY() == v2.getY()) && (v1.getZ() == v2.getZ()));
}

//Question 70) b)
bool cVecteur3d::Coincide(cVecteur3d *v1, cVecteur3d *v2)
//BUT : Comparer deux vecteurs et renvoyer un bool�en selon si ils sont confondus ou non.
//ENTREE : Deux vecteurs.
//SORTIE : Vrai si ils sont confonuds, Faux dans le cas contraire.
{
	return ((v1->getX() == v2->getX()) && (v1->getY() == v2->getY()) && (v1->getZ() == v2->getZ()));
}

//Question 70) c)
bool cVecteur3d::Coincide(cVecteur3d& v1, cVecteur3d& v2)
//BUT : Comparer deux vecteurs et renvoyer un bool�en selon si ils sont confondus ou non.
//ENTREE : Deux vecteurs.
//SORTIE : Vrai si ils sont confonuds, Faux dans le cas contraire.
{
	return ((v1.getX() == v2.getX()) && (v1.getY() == v2.getY()) && (v1.getZ() == v2.getZ()));
}

//Question 71) a)
float cVecteur3d::Normax(cVecteur3d v1, cVecteur3d v2)
//BUT : Renvoyer la plus grande norme parmis celle de deux vecteur.
//ENTREE : Deux vecteurs 3D.
//SORTIE : La norme la plus �lev�es parmis les deux normes.
{
	float fNorme1 = (float)sqrt((double)v1.getX() * v1.getX() + (double)v1.getY() * v1.getY() + (double)v1.getZ() * v1.getZ());
	float fNorme2 = (float)sqrt((double)v2.getX() * v2.getX() + (double)v2.getY() * v2.getY() + (double)v2.getZ() * v2.getZ());

	if (fNorme1 >= fNorme2)
		return fNorme1;
	else
		return fNorme2;
}
