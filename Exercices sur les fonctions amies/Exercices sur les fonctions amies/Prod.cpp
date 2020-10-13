#include "CVect.h"
#include "CMatrice.h"

CVect Prod(CMatrice mMatrice, CVect vVect)
{
	double dX=0;
	double dY=0;
	double dZ=0;

	dX += (mMatrice.m_dMatrice[0][0] * vVect.m_dX);
	dX += (mMatrice.m_dMatrice[1][0] * vVect.m_dY);
	dX += (mMatrice.m_dMatrice[2][0] * vVect.m_dZ);

	dY += (mMatrice.m_dMatrice[0][1] * vVect.m_dX);
	dY += (mMatrice.m_dMatrice[1][1] * vVect.m_dY);
	dY += (mMatrice.m_dMatrice[2][1] * vVect.m_dZ);
	
	dZ += (mMatrice.m_dMatrice[0][2] * vVect.m_dX);
	dZ += (mMatrice.m_dMatrice[1][2] * vVect.m_dY);
	dZ += (mMatrice.m_dMatrice[2][2] * vVect.m_dZ);

	CVect vResult(dX,dY,dZ);

	return vResult;
}