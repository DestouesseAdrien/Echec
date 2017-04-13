#pragma once
#include "Piece.h"
class Reine : public Piece
{
public:
	Reine(Couleur C, int x, int y);
	char getChar();
	bool mouvementValide(int abscisse, int ordonnee);
	
};

