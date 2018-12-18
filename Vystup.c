#include<stdio.h>
#include "Data.h"

void VypisVysledkov(unsigned int pocetLosovanychZrebov, unsigned int celkovyPocetZrebov) {
	printf("\nVysledok zrebovania\n______________________\n");
	printf("\nCelkovy pocet zrebov: %d \n", celkovyPocetZrebov);
	printf("Pocet losovanych zrebov: %d \n", pocetLosovanychZrebov);
	for (unsigned int i = 0; i < pocetLosovanychZrebov; i++)
	{
		printf("%3u. poradie: \t%c %010u\n", i + 1, zreby[i].kod, zreby[i].cislo);
	}
	printf("\nKoniec\n");
}