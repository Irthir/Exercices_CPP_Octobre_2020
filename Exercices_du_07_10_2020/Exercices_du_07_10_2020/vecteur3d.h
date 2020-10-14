#pragma once

class cVecteur3d
{
private:
	float m_fX, m_fY, m_fZ;
public:
	//Question 69) a)
	//cVecteur3d();
	//cVecteur3d(float fX, float fY, float fZ);
	//Question 69) b)
	//cVecteur3d(float fX=0.0, float fY=0.0, float fZ=0.0);
	//Question 69) c)
	inline cVecteur3d(float fX = 0.0, float fY = 0.0, float fZ = 0.0)
	{ this->m_fX = fX; this->m_fY = fY; this->m_fZ = fZ; }

	//Question 70) a)
	static const bool Coincide(cVecteur3d v1, cVecteur3d v2);
	//Question 70) b)
	static const bool Coincide(cVecteur3d* v1, cVecteur3d* v2);
	//Question 70) c)
	static const bool Coincide(cVecteur3d &v1, cVecteur3d &v2);

	//Version 2 \o/
	//Question 70) a)
	const bool Coincide(cVecteur3d v1);
	//Question 70) b)
	const bool Coincide(cVecteur3d* v1);
	//Question 70) c)
	const bool Coincide(cVecteur3d& v1);

	//Question 71) a)
	static const float Normax(cVecteur3d v1, cVecteur3d v2);
	//Question 71) b)
	static float& Normax(cVecteur3d v1, cVecteur3d v2, float &fNormax);
	//Question 71) c)
	static float* Normax(cVecteur3d v1, cVecteur3d v2, float *fNormax);

	//Les assesseurs :
	inline const float getX() { return this->m_fX; }
	inline const float getY() { return this->m_fY; }
	inline const float getZ() { return this->m_fZ; }
	//Les mutateurs :
	inline void setX(float fX) { this->m_fX = fX; }
	inline void setY(float fY) { this->m_fY = fY; }
	inline void setZ(float fZ) { this->m_fZ = fZ; }
};