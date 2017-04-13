#include "stdafx.h"
#include "Pion.h"



Pion::Pion(Couleur C, int x, int y): Piece(C, x, y)
{
	
}

char Pion::getChar()
{
	return getCouleur() == Noir ? 'P' : 'p';
}


bool Pion::mouvementValide(int abscisse, int ordonnee) {
	int x = getPosX();
	int y = getPosY();

	if (abscisse == x && abscisse < 8 && abscisse >= 0 && ordonnee < 8 && ordonnee >= 0) {
		if (this->getChar() == 'p') 
		{
			if (y == 1 && (ordonnee == y + 2 || ordonnee == y + 1)) 
			{
				return true;
			}
			else if ((y != 1) && ordonnee == y + 1) 
			{
				return true;
			}
			else 
			{
				return false;
			}
		}
		else if(this->getChar() == 'P')
		{
			if (y == 6 && (ordonnee == y - 2 || ordonnee == y - 1)) 
			{
				return true;
			}
			else if ((y != 6) && ordonnee == y - 1) 
			{
				return true;
			}
			else 
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
}