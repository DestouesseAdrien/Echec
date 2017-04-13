#pragma once
#include "Piece.h"

class Roi : public Piece // heritage
{
public:
	Roi(Couleur C, int x, int y);
	char getChar();
	bool mouvementValide(int abscisse, int ordonnee);
};

