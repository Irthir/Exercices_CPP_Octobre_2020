#include "CMatrice.h"

CMatrice::CMatrice(double dTableau[3][3])
{
	for (int nI = 0; nI < 3; nI++)
	{
		for (int nJ = 0; nJ < 3; nJ++)
		{
			this->m_dMatrice[nI][nJ] = dTableau[nI][nJ];
		}
	}
}