#include<stdlib.h>
#include "Data.h"
#include<time.h>
void Vymen(unsigned int index, unsigned int i);
void Losovanie(unsigned int celkovyPocetZrebov, unsigned int pocetLosovanychZrebov) {
	srand((unsigned int)time(NULL));
	for (unsigned int i = 0; i < pocetLosovanychZrebov; i++)
	{
		unsigned int index = rand() % (celkovyPocetZrebov - i) + i;
		Vymen(index, i);
	}
}

void Vymen(unsigned int index, unsigned int i) {
	struct Zreb pom;
	pom = zreby[index];
	zreby[index] = zreby[i];
	zreby[i] = pom;
}