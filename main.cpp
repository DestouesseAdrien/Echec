// echec.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Plateau.h"
#include <iostream>

using namespace std;

int main()
{
	Plateau echec;
	int x, y, abscisse, ordonnee;
	echec.afficherPlateau();
	do {
		cout << "Quel piece voulez vous deplacer ? (abscisse, puis ordonee)" << endl;
		cin >> x;
		x--;
		cin >> y;
		y--;
		cout << "Ou vous voulez la deplacer ?" << endl;
		cin >> abscisse;
		abscisse--;
		cin >> ordonnee;
		ordonnee--;

		echec.mouvementValide(x, y, abscisse, ordonnee);
		echec.afficherPlateau();
	} while (x != 10);
    return 0;
}

