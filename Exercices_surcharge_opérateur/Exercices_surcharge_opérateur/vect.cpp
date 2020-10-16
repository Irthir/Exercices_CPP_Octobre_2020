#include "vect.h"
#include <iostream>

//Exercice 90

vect::vect(int exp)
{
	vector<int> vVector(exp,0);
	m_vector = vVector;
}

int& vect::operator[](int const nX)
{
	if (0 <= nX && nX < m_vector.size())
	{
		return this->m_vector[nX];
	}
	cout << "Erreur depassement de Tableau." << endl;
	exit;
}
