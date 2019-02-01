/*
 * main.cpp
 *
 *  Created on: 2019-02-01
 *      Author: Luc Rainville
 */

#include <iostream>
#include "fonctions.h"

using namespace std;

int main()
{
	int matriceA[LIGNES][COLONNES];
	int matriceB[LIGNES][COLONNES];
	int matriceC[LIGNES][COLONNES];

	saisirMatrice(matriceA, matriceB);

	somme(matriceA, matriceB, matriceC);

	affiche(matriceC);

	return 0;
}

