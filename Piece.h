#pragma once

enum Couleur 
{
	Noir,
	Blanc,
};

class Piece
{
public:
	Piece(Couleur C, int x, int y);
	Couleur getCouleur();
	virtual char getChar() = 0;
	int getPosX() { return x; };
	int getPosY() { return y; };
	void setPosx(int x);
	void setPosy(int y);
	virtual bool mouvementValide(int abscisse, int ordonnee) = 0;

private:
	int x;
	int y;
	Couleur couleur;
};