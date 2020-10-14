#include <iostream>
#include "chose.h"
#include <locale.h>
#include "demo.h"
#include "point.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //Pour mettre les accents dans la console.

	//Exercice 74 :
	chose x;

	chose* adc = new chose;
	delete adc;

	cout << "bonjour\n";

	//Exercice 75 :
	void fct(demo, demo*); //proto fonction indépendante fct
	cout << "début main \n";
	demo a;
	demo b = 2;
	demo c = a;
	demo* adr = new demo(3, 3);
	fct(a, adr);
	demo d = demo(4, 4);
	c = demo(5, 5);
	cout << "fin main\n";

	/*Réponse quant à l'exercice 75 :
		début main
		constructeur I : 1 0
		constructeur I : 2 0
		constructeur II (recopie) : 1 0
		constructeur I : 3 3
		constructeur II (recopie) : 1 0
		entrée fct
		destruction : 3 3
		sortie fct
		destruction : 1 0
		constructeur I : 4 4
		constructeur I : 5 5
		destruction : 5 5
		fin main
		destruction : 4 4
		destruction : 5 5
		destruction : 2 0
		destruction : 1 0*/

		//Exercice 76
	point pTab[4];
	delete[] pTab;

	return 0;
}

void fct(demo d, demo* add)
{
	cout << "entrée fct\n";
	delete add;
	cout << "sortie fct\n";
}