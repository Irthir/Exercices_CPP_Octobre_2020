#pragma once
#include <iostream>

using namespace std;

class demo
{
private:
	int x, y;
public:
	demo(int abs = 1, int ord = 0) //Constructeur I (0, 1 ou 2 arguments)
	{
		x = abs;
		y = ord;
		cout << "constructeur I : " << x << " " << y << "\n";
	}
	demo(demo const &d);
	~demo();
};
