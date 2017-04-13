#include "stdafx.h"
#include "Piece.h"
#include <iostream>

using namespace std;

Piece::Piece(Couleur C, int x, int y) 
{
	this->x = x;
	this->y = y;
	this->couleur = C;
}

Couleur Piece::getCouleur()
{
	return this->couleur;
}
void Piece::setPosx(int x) {
	this->x = x;
 }

void Piece::setPosy(int y) {
	this->y = y;
}