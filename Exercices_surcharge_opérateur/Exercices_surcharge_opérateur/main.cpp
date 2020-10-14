#include <iostream>
#include "vecteur3d_84.h"

using namespace std;

int main()
{
	//Exercice 84
	vecteur3d_84 vVec(5, 5, 7);
	vecteur3d_84 vVec2(7, 5, 7);
	cout << (vVec == vVec2) << endl;
	cout << (vVec != vVec2) << endl;
	
	return 0;
}