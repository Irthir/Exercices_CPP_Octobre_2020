#include "vecteur3d.h"
#include <iostream>

using namespace std;

void vecteur3d::affiche()
{
	cout << "X = " << x << " Y = " << y << " Z = " << z << endl;
}

/*bool vecteur3d::operator==(vecteur3d &vVec)
{
	return (x == vVec.x && y == vVec.y && z == vVec.z);
}

bool vecteur3d::operator!=(vecteur3d &vVec)
{
	return !(x == vVec.x && y == vVec.y && z == vVec.z);
}*/

bool operator==(vecteur3d& vVec, vecteur3d& vVec2)
{
	return (vVec2.x == vVec.x && vVec2.y == vVec.y && vVec2.z == vVec.z);
}

bool operator!=(vecteur3d& vVec, vecteur3d& vVec2)
{
	return !(vVec2.x == vVec.x && vVec2.y == vVec.y && vVec2.z == vVec.z);
}

vecteur3d operator+(vecteur3d& vVec, vecteur3d& vVec2)
{
	vecteur3d vTemp(vVec.x + vVec2.x, vVec.y + vVec2.y, vVec.z + vVec2.z);
	return vTemp;
}

float operator*(vecteur3d& vVec, vecteur3d& vVec2)
{
	float fTemp(vVec.x * vVec2.x + vVec.y * vVec2.y + vVec.z * vVec2.z);
	return fTemp;
}
