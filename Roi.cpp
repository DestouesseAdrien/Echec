#include "stdafx.h"
#include "Roi.h"
#include <iostream>

using namespace std; 

Roi::Roi(Couleur C, int x, int y) : Piece(C, x, y)
{

}

char Roi::getChar()
{
	return getCouleur() == Noir ? 'R' : 'r';
}

bool Roi::mouvementValide(int abscisse, int ordonnee)
{
	int a = getPosX();
	int b = getPosY();
	int t1 = a - abscisse;
	int t2 = b - ordonnee;
	if ((-1 <= t1 && t1 <= 1) && (-1 <= t2 && t2 <= 1)) {
		return true;
	}
	else {
		return false;
	}
}
