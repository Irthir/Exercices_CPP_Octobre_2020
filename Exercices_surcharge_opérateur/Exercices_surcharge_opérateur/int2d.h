#pragma once
#include <vector>

using namespace std;

//Exercice 91

class int2d
{
private:
	vector<vector<int>> m_int2d;
public:
	int2d(const int&, const int&);

	int& operator()(int const nI,int const nJ);
};