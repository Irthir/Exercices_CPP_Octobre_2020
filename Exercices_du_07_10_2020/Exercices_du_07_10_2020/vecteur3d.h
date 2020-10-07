#pragma once

class cVecteur3d
{
private:
	float m_fX, m_fY, m_fZ;
public:
	inline cVecteur3d() { this->m_fX = 0; this->m_fY = 0; this->m_fZ = 0; };
	cVecteur3d(float fX, float fY, float fZ);

	//Les assesseurs :
	float getX() { return this->m_fX; }
	float getY() { return this->m_fY; }
	float getZ() { return this->m_fZ; }
	//Les mutateurs :
};