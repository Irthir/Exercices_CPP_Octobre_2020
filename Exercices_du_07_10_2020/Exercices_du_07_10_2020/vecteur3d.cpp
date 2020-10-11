#include "vecteur3d.h"

//Question 69) a)

//Le constructeur par défaut :
cVecteur3d::cVecteur3d()
//BUT : Créer un vecteur 3D sans arguments.
//ENTREE : N/A
//SORTIE : Un vecteur 3D créé avec ses composants à 0.
{
	this->m_fX = 0;
	this->m_fY = 0;
	this->m_fZ = 0;
}

//Les autres définitions du constructeur :
cVecteur3d::cVecteur3d(float fX=0, float fY=0, float fZ=0)
//BUT : Créer un vecteur 3D en précisant ses coordonnées.
//ENTREE : Les valeurs en X,Y et Z du vecteur 3D.
//SORTIE : Un vecteur 3D créé.
{
	this->m_fX = fX;
	this->m_fY = fY;
	this->m_fZ = fZ;
}

//Question 69) b)
//On réutilise la fonction précédente pour définir le prototype du fichier source.


