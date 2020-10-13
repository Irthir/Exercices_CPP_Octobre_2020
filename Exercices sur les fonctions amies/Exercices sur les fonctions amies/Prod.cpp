#include "CVect.h"
#include "CMatrice.h"

CVect Prod(CMatrice mMatrice, CVect vVect)
{
	double vecResultTab[3] = { 0 };

	double vecTab[3] = { 0 };
	vecTab[0] = vVect.m_dX;
	vecTab[1] = vVect.m_dY;
	vecTab[2] = vVect.m_dZ;

	for (int nJ = 0; nJ < 3;nJ++)
	{
		for (int nI = 0; nI < 3; nI++)
		{
			vecResultTab[nJ] += (mMatrice.m_dMatrice[nI][nJ] * vecTab[nI]);
		}
	}

	CVect vResult(vecResultTab[0], vecResultTab[1], vecResultTab[2]);

	return vResult;
}