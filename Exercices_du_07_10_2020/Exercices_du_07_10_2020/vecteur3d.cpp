#include "vecteur3d.h"

//Question 69) a)

//Le constructeur par d�faut :
cVecteur3d::cVecteur3d()
//BUT : Cr�er un vecteur 3D sans arguments.
//ENTREE : N/A
//SORTIE : Un vecteur 3D cr�� avec ses composants � 0.
{
	this->m_fX = 0;
	this->m_fY = 0;
	this->m_fZ = 0;
}

//Les autres d�finitions du constructeur :
cVecteur3d::cVecteur3d(float fX=0, float fY=0, float fZ=0)
//BUT : Cr�er un vecteur 3D en pr�cisant ses coordonn�es.
//ENTREE : Les valeurs en X,Y et Z du vecteur 3D.
//SORTIE : Un vecteur 3D cr��.
{
	this->m_fX = fX;
	this->m_fY = fY;
	this->m_fZ = fZ;
}

//Question 69) b)
//On r�utilise la fonction pr�c�dente pour d�finir le prototype du fichier source.


