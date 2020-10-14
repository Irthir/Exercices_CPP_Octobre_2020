#pragma once
class CPoint
//DEFINITION : Classe repr�sentant un point dans un espace en deux dimensions, poss�dant comme membres deux nombres en X et Y repr�sentant sa position dans cet espace.
{
private:
	//Membres de la classe
	float m_fX;
	float m_fY;

	//Membre statique de la classe
	static int m_nCompteur;

public:
	//Le Constructeur par d�faut
	CPoint(float fX=0.0, float fY=0.0);
	//Le Destructeur
	~CPoint();

	static const int Nombre();

	//Assesseurs :
	inline float const getX() { return this->m_fX; }
	inline float const getY() { return this->m_fY; }
	//Mutateurs
	inline void setX(float fX) { this->m_fX = fX; }
	inline void setY(float fY) { this->m_fY = fY; }
};