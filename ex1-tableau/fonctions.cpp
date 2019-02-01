#include <iostream>
#include "fonctions.h"

using namespace std;

void saisieDonnees(int *nb, int *tableauNb)
{
	cout << "Entrer la longueur du tableau de [0-" << MAX << "]: ";
	cin >> *nb;

	for (int i = 0; i < *nb; i++)
	{
		cout << "Entrer l'élément " << (i + 1) << ": ";
		cin >> tableauNb[i];
	}

}

void calculMoyenne(int nb, int* tableauNb, float* moyenne)
{
	float somme = 0;
	for (int i = 0; i < nb; i++)
	{
		somme += tableauNb[i];
	}
	*moyenne = somme / (nb);

}

void affichageResultats(int nb, float moyenne, int* tableauNb)
{
	cout << "La moyenne des nombres est = " << moyenne << endl;
	float ecart = 0;
	for (int i = 0; i < nb; i++)
	{
		ecart = moyenne - tableauNb[i];
		cout << "L'écart entre la note " << (i+1) << " et la moyenne est " << ecart << endl;
	}
}
