#pragma once
#include <vector>

class set_int
{
private :
	int *m_nTab;
	int m_nTaille;
	const int TAILLEMAX=100;
public :
	//constructeur
	set_int(int nTaille);
	//destructeur
	~set_int();
	//cardinal
	int cardinal();
	//appartient
	bool appartient(int nX);
};