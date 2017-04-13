#include "stdafx.h"
#include "tour.h"
#include <iostream>
#include "Piece.h"

using namespace std;

Tour::Tour(Couleur C,int x, int y) : Piece(C, x, y)
{
	
}

char Tour::getChar()
{ 
	return getCouleur()==Noir ? 'T' : 't';
}

bool Tour::mouvementValide(int abscisse, int ordonnee) {
	int x = this->getPosX();
	int y = this->getPosY();

	cout << x << y;

	if ((abscisse == x || ordonnee == y) && abscisse < 8 && abscisse >= 0 && ordonnee < 8 && ordonnee >= 0) {
		return true;
	}
	else {
		return false;
	}
}