#pragma once
#include <vector>

using namespace std;

//Exercice 90

class vect
{
private:
	vector<int> m_vector;
public:
	vect(int exp=10);
	int& operator[](int const nX);
};