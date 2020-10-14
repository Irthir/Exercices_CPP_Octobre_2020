#include <iostream>
#include "chose.h"
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //Pour mettre les accents dans la console.

	//Exercice 74 :
	chose x;

	chose* adc = new chose;
	delete adc;
	
	cout << "bonjour\n";

	return 0;
}