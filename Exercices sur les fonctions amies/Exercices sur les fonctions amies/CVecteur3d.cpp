#include "CVecteur3d.h"

bool coincide(vecteur3d vec1, vecteur3d vec2)
{
	if ((vec1.x == vec2.x) && (vec1.y == vec2.y) && (vec1.z == vec2.z))
	{
		return true;
	}
	else
	{
		return false;
	}
}
