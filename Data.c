#include <malloc.h>
#include "Data.h"

struct Zreb * zreby;

#define POCET_PISMEN 26
void PripravZreby(unsigned int celkovyPocetZrebov) {
	zreby = malloc(celkovyPocetZrebov * sizeof(struct Zreb)); //alokacia pamati
	for (unsigned int i = 0; i < celkovyPocetZrebov; i++)
	{
		zreby[i].cislo = i + 1;
		zreby[i].kod = 'A' + (i % POCET_PISMEN);
	}
}

void ZrusZreby() {
	free(zreby); //uvolnenie pamati 
	zreby = NULL;
}