#pragma once
#include "Piece.h"
#include "Fou.h"
#include "tour.h"
class Reine : public Fou, public Tour
{
public:
	Reine(Couleur C, int x, int y);
	char getChar();
	bool mouvementValide(int abscisse, int ordonnee);
	
};

