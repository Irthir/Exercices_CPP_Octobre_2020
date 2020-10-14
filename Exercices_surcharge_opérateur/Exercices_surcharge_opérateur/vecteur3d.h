#pragma once

class vecteur3d
{
private :
	float x, y, z;
public :
	inline vecteur3d(float c1 = 0.0f, float c2 = 0.0f, float c3 = 0.0f)
	{
		x = c1; y = c2; z = c3;
	}

	/*bool operator==(vecteur3d&);
	bool operator!=(vecteur3d&);*/
	
	void affiche();

	friend bool operator==(vecteur3d&, vecteur3d&);
	friend bool operator!=(vecteur3d&, vecteur3d&);

	friend vecteur3d operator+(vecteur3d&, vecteur3d&);
	friend float operator*(vecteur3d&, vecteur3d&);
};