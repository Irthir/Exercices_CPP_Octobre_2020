#include "point.h"

int CPoint::m_nCompteur = 0;

//Le constructeur de la classe point.
CPoint::CPoint(float fX, float fY)
{
	this->m_fX = fX;
	this->m_fY = fY;
	m_nCompteur++; //On incrémente le compteur quand on crée un point.
}

//Le destructeur de la classe point.
CPoint::~CPoint()
{
	m_nCompteur--; //On décrémente le compteur quand on détruit un point.
}

//La fonction statique permettant de récupérer le nombre actuel de point instanciés dans le programme.
int const CPoint::Nombre()
//BUT : Retourner le nombre de points actuellement dans le programme.
//ENTREE : La valeur statique m_nCompteur de la classe CPoint.
//SORTIE : Le nombre de points actuellement dans le programme.
{
	return m_nCompteur;
}
