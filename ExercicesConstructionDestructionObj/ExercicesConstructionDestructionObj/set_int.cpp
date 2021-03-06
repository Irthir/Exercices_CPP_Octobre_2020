#include "set_int.h"
#include <iostream>

using namespace std;

set_int::set_int(int nTailleMax)
{
	m_nTaille = 0;
	m_nTab = new int[nTailleMax];
	m_nTailleMax = nTailleMax;
}

set_int::set_int(set_int &mon_set_int)
{
	m_nTailleMax = mon_set_int.m_nTailleMax;
	m_nTab = new int[m_nTailleMax];
	m_nTaille = 0;
	for (int nI = 0;mon_set_int.m_nTaille; nI++)
	{
		this->ajout(mon_set_int.m_nTab[nI]);
	}
}

set_int::~set_int()
{
	delete[] m_nTab;
}

void set_int::ajout(int nX)
{
	if (m_nTaille + 1 >= m_nTailleMax)
	{
		cout << "Tableau plein impossible de rajouter un element." << endl;
		return;
	}
	m_nTab[m_nTaille] = nX;
	m_nTaille++;
}

int set_int::cardinal()
{
	return m_nTaille;
}

bool set_int::appartient(int nX)
{
	for (int nI = 0; nI < m_nTaille; nI++)
	{
		if (nX == m_nTab[nI])
			return true;
	}
	return false;
}

void set_int::affiche()
{
	for (int i = 0; i < m_nTaille; i++)
	{
		cout << "Element " << i+1 << " : " << m_nTab[i] << endl;
	}
}
