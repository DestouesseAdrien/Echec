#pragma once
#include "Piece.h"

class Tour : public Piece // heritage
{
public:
	Tour(Couleur C, int x, int y);
	char getChar();
	bool mouvementValide(int abscisse, int ordonnee);
};

