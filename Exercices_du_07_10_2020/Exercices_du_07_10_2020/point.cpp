#include "point.h"

int CPoint::m_nCompteur = 0;

//Le constructeur de la classe point.
CPoint::CPoint(float fX, float fY)
{
	this->m_fX = fX;
	this->m_fY = fY;
	m_nCompteur++; //On incr�mente le compteur quand on cr�e un point.
}

//Le destructeur de la classe point.
CPoint::~CPoint()
{
	m_nCompteur--; //On d�cr�mente le compteur quand on d�truit un point.
}

//La fonction statique permettant de r�cup�rer le nombre actuel de point instanci�s dans le programme.
int const CPoint::Nombre()
//BUT : Retourner le nombre de points actuellement dans le programme.
//ENTREE : La valeur statique m_nCompteur de la classe CPoint.
//SORTIE : Le nombre de points actuellement dans le programme.
{
	return m_nCompteur;
}
