#pragma once
#include "Piece.h"

class Pion : public Piece // heritage
{
public:
	Pion(Couleur C, int x, int y);
	char getChar();
	bool mouvementValide(int abscisse, int ordonnee);
};
