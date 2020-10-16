#pragma once

//Exercice 89

class vector3d
{
private:
	float v[3];
	const int TAILLE = 3;
public:
	inline vector3d(float c1 = 0.0f, float c2 = 0.0f, float c3 = 0.0f)
	{
		v[0] = c1;
		v[1] = c2;
		v[2] = c3;
	}

	float operator[](int const nX)const;
	float& operator[](int const nX);
};