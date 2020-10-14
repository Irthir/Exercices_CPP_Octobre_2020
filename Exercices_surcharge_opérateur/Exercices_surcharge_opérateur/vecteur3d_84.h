#pragma once

class vecteur3d_84
{
private :
	float x, y, z;
public :
	inline vecteur3d_84(float c1 = 0.0f, float c2 = 0.0f, float c3 = 0.0f)
	{
		x = c1; y = c2; z = c3;
	}

	/*bool operator==(vecteur3d_84&);
	bool operator!=(vecteur3d_84&);*/

	friend bool operator==(vecteur3d_84&, vecteur3d_84&);
	friend bool operator!=(vecteur3d_84&, vecteur3d_84&);
};