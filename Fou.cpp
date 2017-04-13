#include "stdafx.h"
#include "Fou.h"

using namespace std;

Fou::Fou(Couleur C, int x, int y) : Piece(C, x, y)
{
}

char Fou::getChar()
{
	return getCouleur() == Noir ? 'F' : 'f';
}

bool Fou::mouvementValide(int abscisse, int ordonnee)
{
	int x = getPosX();
	int y = getPosY();
	int difX = x - abscisse;
	int difY = y - ordonnee;
	// if (difX * abscisse == difX * ordonnee)
	if ((difX == difY || difX == -difY) && abscisse < 8 && abscisse >= 0 && ordonnee < 8 && ordonnee >= 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
