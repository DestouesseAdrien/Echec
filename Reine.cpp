#include "stdafx.h"
#include <iostream>
#include "Reine.h"



Reine::Reine(Couleur C, int x, int y) : Piece(C, x, y), Fou(C, x, y), Tour(C, x, y)
{
}

char Reine::getChar()
{
	return getCouleur() == Noir ? 'D' : 'd';
}

bool Reine::mouvementValide(int abscisse, int ordonnee)
{
	if (Tour::mouvementValide(abscisse,ordonnee) || Fou::mouvementValide(abscisse, ordonnee))
	{
		return true;
	}
	else
	{
		return false;
	}
}
