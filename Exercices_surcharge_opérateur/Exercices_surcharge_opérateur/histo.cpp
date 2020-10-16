#include "histo.h"
#include <iostream>

using namespace std;

//Exercice 92

histo::histo(float min, float max, int ninter)
{
	if ((max <= min) || (ninter <= 0))
	{
		cout << "Erreur maximum inferieur ou egal au minimum ou intervalle inferieur ou egal a 0."<< endl;
		throw;
	}
	
	m_max = max;
	m_min = min;

	m_famplitude = (max - min) / ninter;
	m_ninter = ninter;
	m_tab = new int[ninter];
}

histo::~histo()
{
	delete[] m_tab;
}

histo& histo::operator<<(float nX)
{
	if (nX <m_min || nX>m_max)
	{
		cout << "nX non compris entre max et min donc ignore." << endl;
		throw;
	}
	int nPosition=0;
	while (nX > m_famplitude)
	{
		nX -= m_famplitude;
		nPosition++;
	}
	if (0<=nPosition && nPosition<m_ninter)
		m_tab[nPosition]++;
}

int histo::operator[](int const nI) const
{
	if (nI >= 1 && nI <= m_ninter)
	{
		return this->m_tab[nI-1];
	}

	cout << "Erreur depassement de Tableau." << endl;
	throw;
}


