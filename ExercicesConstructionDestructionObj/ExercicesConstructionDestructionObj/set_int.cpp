#include "set_int.h"
#include <iostream>

using namespace std;

set_int::set_int(int const nTaille)
{
	m_nTaille = nTaille;
	m_nTab = new(int[nTaille]);
	for (int nI = 0; nI < nTaille; nI++)
	{
		//cin >> m_nTab[nI];
		m_nTab[nI] = nI * nI;
	}
}

set_int::~set_int()
{
	delete[] m_nTab;
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
