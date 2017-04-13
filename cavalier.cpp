#include "stdafx.h"
#include "cavalier.h"
#include <iostream>
#include "Piece.h"

Cavalier::Cavalier(Couleur C, int x, int y) : Piece(C, x, y)
{

}

char Cavalier::getChar()
{
	return getCouleur() == Noir ? 'C' : 'c';
}

bool Cavalier::mouvementValide(int abscisse, int ordonnee) {
	int x = getPosX();
	int y = getPosY();
	if ((abscisse == x - 2 && ordonnee == y - 1) || (abscisse == x - 2 && ordonnee == y + 1) || (abscisse == x + 2 && ordonnee == y - 1) || (abscisse == x + 2 && ordonnee == y + 1) || (abscisse == x - 1 && ordonnee == y - 2) || (abscisse == x + 1 && ordonnee == y - 2) || (abscisse == x - 1 && ordonnee == y + 2) || (abscisse == x + 1 && ordonnee == y + 2))
	{
		return true;
	}
	else
	{
		return false;
	}
}