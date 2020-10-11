#pragma once

class cVecteur3d
{
private:
	float m_fX, m_fY, m_fZ;
public:
	//Question 69) a)
	cVecteur3d();
	//cVecteur3d(float fX, float fY, float fZ);
	//Question 69) b)
	cVecteur3d(float fX, float fY, float fZ);
	//Question 69) c)
	//inline cVecteur3d(float fX = 0, float fY = 0, float fZ = 0){ this->m_fX = fX; this->m_fY = fY; this->m_fZ = fZ; }

	//inline cVecteur3d() { this->m_fX = 0; this->m_fY = 0; this->m_fZ = 0; };

	//Les assesseurs :
	inline const float getX() { return this->m_fX; }
	inline const float getY() { return this->m_fY; }
	inline const float getZ() { return this->m_fZ; }
	//Les mutateurs :
	inline void setX(float fX) { this->m_fX = fX; }
	inline void setY(float fY) { this->m_fY = fY; }
	inline void setZ(float fZ) { this->m_fZ = fZ; }
};