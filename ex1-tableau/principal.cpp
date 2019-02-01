#include <iostream>
#include "fonctions.h"

using namespace std;

int main()
{
	int nb = 0;
	int tableauNb[MAX];

	for (int i = 0; i < MAX; i++)
	{
		tableauNb[i] = -1;
	}

	saisieDonnees(&nb, tableauNb);

	float moyenne = 0;

	calculMoyenne(nb, tableauNb, &moyenne);

	affichageResultats(nb, moyenne, tableauNb);

	return 0;
}
