#include "fonction.h"

void GestionDesAdresses()
{
	int* pt1;
	int* pt2;
	char* pt3;

	//A
	pt1 = nullptr;
	cout << "Valeur de pt1 : " << pt1 << endl;
	cout << "Adresse pointée par pt1 : " << &pt1 << endl;
	//Valeur de pt1 : 0000000000000000
	//Adresse de pt1 : 0000008A11F2F908

	//B
	int var = 42;
	pt2 = &var;
	cout << "Valeur de var : " << var << endl;
	cout << "Valeur pt2 : " << *pt2 << endl;
	var = 100;
	cout << "Valeur pt2 : " << *pt2 << endl;
	/*Valeur de var : 42
	Valeur pt2 : 42
	Valeur pt2 : 100
	*/

	/*
	C
	*pt1 = 25;
	Exception levée  : violation d'accès en écriture.
	pt1 a été nullptr.
	*/

	/*
	D
	pt3 = &var;
	'=' : impossible de convertir de 'int *' en 'char *'
	*/

	//E
	char tableau[] = "Wanko";
	pt3 = tableau;
	cout << "Valeur de pt3 : " << pt3[4] << endl;
}

void ParcourirTableau()
{
	int tableau[] = { 10,20,30,40,50 };
	for (int i = 0; i < sizeof(tableau) / sizeof(tableau[0]); i++)
	{
		cout << tableau[i] << endl;
	}

	int *pt = tableau;
	for (int i = 0; i < sizeof(tableau) / sizeof(tableau[0]); i++)
	{
		cout << *(pt +i) << endl;
	}

	//Les deux boucles affichent la même chose, mais la deuxième utilise un pointeur pour parcourir le tableau, tandis que la première utilise un index.
}