#pragma once

class vecteur3d
{
private:
	float x, y, z;
public:
	inline vecteur3d(float c1 = 0.0, float c2 = 0.0, float c3 = 0.0)
			{ x = c1; y = c2; z = c3; }

	//Exercice 82
	bool friend coincide(vecteur3d &vec1, vecteur3d &vec2);
};