#pragma once
#include "Piece.h"

class Plateau
{
private:
	Piece *echiquier[8][8];
	void initialisation();

public:
	Plateau();
	void Plateau::afficherPlateau();
	void Plateau::mouvementValide(int x, int y, int abscisse, int ordonnee);
};