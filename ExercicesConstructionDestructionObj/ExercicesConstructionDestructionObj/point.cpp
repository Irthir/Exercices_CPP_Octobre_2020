#include "point.h"
#include <iostream>

using namespace std;

int point::s_Numero = 0;

point::point()
{
	s_Numero++;
	this->m_nNumero = s_Numero;
	cout << "Cr�ation du point " << m_nNumero << endl;
}

point::~point()
{
	cout << "Destruction du point " << m_nNumero << endl;
}