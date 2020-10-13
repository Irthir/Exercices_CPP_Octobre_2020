#pragma once

class CMatrice;
class CVect
{
private:
	double m_dX;
	double m_dY;
	double m_dZ;
public:
	CVect(double dX, double dY, double dZ);
	friend void const Affichage(CVect vVect);

	friend CVect Prod(CMatrice mMatrice, CVect vVect);
};