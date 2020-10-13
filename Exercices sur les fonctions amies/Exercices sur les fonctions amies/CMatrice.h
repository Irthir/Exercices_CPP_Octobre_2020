#pragma once

class CVect;
class CMatrice
{
private:
	double m_dMatrice[3][3] = { 0 };
public:
	CMatrice(double dTableau[3][3] = { 0 });
	friend void const Affiche(CMatrice mMatrice);

	friend CVect Prod(CMatrice mMatrice, CVect vVect);
};