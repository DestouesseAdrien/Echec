#include "stdafx.h"
#include "Plateau.h"
#include <iostream>
#include "tour.h"
#include "Pion.h"
#include "Fou.h"
#include "Roi.h"

using namespace std;

void Plateau::initialisation()
{
	int i, j;
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			echiquier[j][i] = NULL;
		}
	}
}

Plateau::Plateau()
{
	initialisation();
	echiquier[0][0] = new Tour(Blanc, 0, 0); /*Tour blanche*/
	echiquier[0][7] = new Tour(Blanc, 7, 0);	 /*Tour blanche*/
	echiquier[7][0] = new Tour(Noir, 0, 7);	 /*Tour noir */
	echiquier[7][7] = new Tour(Noir, 7, 7);	 /*Tour noir*/
	echiquier[0][2] = new Fou(Blanc, 2, 0);	
	echiquier[0][5] = new Fou(Blanc, 5, 0);
	echiquier[7][2] = new Fou(Noir, 2, 7);
	echiquier[7][5] = new Fou(Noir, 5, 7);
	echiquier[0][3] = new Reine(Blanc, 3, 0);
	echiquier[7][3] = new Reine(Noir, 3, 7);
	

	for (int x = 0; x < 8; x++)
	{
		echiquier[1][x] = new Pion(Blanc, x , 1);
	}
	for (int x = 0; x < 8; x++)
	{
		echiquier[6][x] = new Pion(Noir, x, 6);
	}
}

void Plateau::afficherPlateau()
{
	int i, j;
	cout << endl << "                                                    1 2 3 4 5 6 7 8";
	cout << endl << "                                                   -----------------";
	for (i = 0; i < 8; i++)
	{
		cout << endl << "                                                 " << i + 1 << " |";
		for (j = 0; j < 8; j++)
		{
			if (echiquier[i][j] == NULL)
			{
				cout << ' ' << "|";
			}
			else
			{
				cout << echiquier[i][j]->getChar() << "|";
			}
		}
		cout << endl << "                                                   -----------------" << endl;
	}
}

void Plateau::mouvementValide(int x, int y, int abscisse, int ordonnee)
{
	if (echiquier[y][x] != NULL && echiquier[y][x]->mouvementValide(abscisse, ordonnee)) {
		if ((echiquier[ordonnee][abscisse] == NULL) || echiquier[ordonnee][abscisse]->getCouleur() != echiquier[y][x]->getCouleur()) {
			echiquier[y][x]->setPosx(abscisse);
			echiquier[y][x]->setPosy(ordonnee);
			echiquier[ordonnee][abscisse] = echiquier[y][x];
			echiquier[y][x] = NULL;
		}
	}
	else {
		cout << "deplacement non valide" << endl;
	}
}


