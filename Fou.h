#pragma once
#include "Piece.h"
class Fou :
	virtual public Piece
{
public:
	Fou(Couleur C, int x, int y);
	char getChar();
	bool mouvementValide(int abscisse, int ordonnee);
	
};

