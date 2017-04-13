#pragma once
#include "Piece.h"

class Cavalier : public Piece // heritage
{
public:
	Cavalier(Couleur C, int x, int y);
	char getChar();
	bool mouvementValide(int abscisse, int ordonnee);
};