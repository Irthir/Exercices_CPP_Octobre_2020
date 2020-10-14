#include "demo.h"

demo::demo(const demo & d)
{
	cout << "constructeur II (recopie) : " << d.x << " " << d.y << "\n";
	x = d.x;
	y = d.y;
}

demo::~demo()
{
	cout << "destruction : " << x << " " << y << "\n";
}