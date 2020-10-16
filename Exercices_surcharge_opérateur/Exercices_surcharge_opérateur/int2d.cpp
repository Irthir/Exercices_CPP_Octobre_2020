#include "int2d.h"
#include <iostream>

//Exercice 91

int2d::int2d(const int& nX, const int& nY)
{
	vector<vector<int>> vVector(nX, vector<int>(nY, 0));
	m_int2d = vVector;
}

int& int2d::operator()(int const nI, int const nJ)
{
	if (0 <= nI && nI < m_int2d.size())
	{
		if (0 <= nJ && nJ < m_int2d[nI].size())
		{
			return m_int2d[nI][nJ];
		}
	}
	cout << "Erreur depassement de Tableau." << endl;
	exit;
}
