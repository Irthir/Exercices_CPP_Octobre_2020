#pragma once

class set_int
{
private :
	int *m_nTab;
	int m_nTaille;
	int m_nTailleMax;
public :
	//constructeur
	set_int(int nTailleMax=100);
	//constructeur de copie
	set_int(set_int&);
	//destructeur
	~set_int();
	//ajout
	void ajout(int nX);
	//cardinal
	int cardinal();
	//appartient
	bool appartient(int nX);
	//affiche
	void affiche();
};