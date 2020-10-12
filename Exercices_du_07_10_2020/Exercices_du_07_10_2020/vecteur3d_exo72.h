#pragma once

class Vecteur3d_exo72
{
private:
	float m_fX, m_fY, m_fZ;
public:
	//Le constructeur par défaut :
	Vecteur3d_exo72(float fX=0.0, float fY=0.0, float fZ=0.0);

	//La fonction d'affichage :
	void const Affichage();

	//La fonction somme : 
	Vecteur3d_exo72 const Somme(Vecteur3d_exo72 &vecteur2);

	//La fonction scalaire :
	float const Scalaire(Vecteur3d_exo72 &vecteur2);
};