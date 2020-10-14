#include "vecteur3d_84.h"

/*bool vecteur3d_84::operator==(vecteur3d_84 &vVec)
{
	return (x == vVec.x && y == vVec.y && z == vVec.z);
}

bool vecteur3d_84::operator!=(vecteur3d_84 &vVec)
{
	return !(x == vVec.x && y == vVec.y && z == vVec.z);
}*/

bool operator==(vecteur3d_84& vVec, vecteur3d_84& vVec2)
{
	return (vVec2.x == vVec.x && vVec2.y == vVec.y && vVec2.z == vVec.z);
}

bool operator!=(vecteur3d_84& vVec, vecteur3d_84& vVec2)
{
	return !(vVec2.x == vVec.x && vVec2.y == vVec.y && vVec2.z == vVec.z);
}
