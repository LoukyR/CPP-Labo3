#include <iostream>
#include "fonctions.h"

using namespace std;

void saisirMatrice(int p_matA[LIGNES][COLONNES], int p_matB[LIGNES][COLONNES])
{
	cout << "== Saisir matrice A ==" << endl;

	for (int i = 0; i < LIGNES; i++)
	{
		for (int j = 0; j < COLONNES; j++)
		{
			cout << "Élément " << i + 1 << ',' << j + 1 << ": ";
			cin >> p_matA[i][j];
		}
	}

	cout << "== Saisir matrice B ==" << endl;

	for (int i = 0; i < LIGNES; i++)
	{
		for (int j = 0; j < COLONNES; j++)
		{
			cout << "Élément " << i + 1 << ',' << j + 1 << ": ";
			cin >> p_matB[i][j];
		}
	}
}

void somme(int p_matA[LIGNES][COLONNES], int p_matB[LIGNES][COLONNES],
		int p_matC[LIGNES][COLONNES])
{
	for (int i = 0; i < LIGNES; i++)
	{
		for (int j = 0; j < COLONNES; j++)
		{
			p_matC[i][j] = p_matA[i][j] + p_matB[i][j];
		}
	}
}

void affiche(int p_matC[LIGNES][COLONNES])
{
	cout << "== Somme A + B ==" << endl;
	for (int i = 0; i < LIGNES; i++)
	{
		for (int j = 0; j < COLONNES; j++)
		{
			cout << p_matC[i][j] << '\t';
		}
		cout << endl << endl;
	}
}

