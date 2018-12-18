#include<stdio.h>
#include "Loteria.h"
#include "Data.h"
#include "Losovanie.h"
#include "Vystup.h"

void Zrebovanie( int celkovyPocetZrebov, int pocetLosovanychZrebov) {
	if (celkovyPocetZrebov <= 0 || pocetLosovanychZrebov <= 0) {
		printf("\nNespravne parametre, loteria zamietnuta.\n");
		printf("\nCelkovy pocet zrebov: %d \n", celkovyPocetZrebov);
		printf("\nPocet losovanych zrebov: %d \n", pocetLosovanychZrebov);
		return;
	}
	if (pocetLosovanychZrebov > celkovyPocetZrebov) {
		unsigned int pomocna = pocetLosovanychZrebov;
		pocetLosovanychZrebov = celkovyPocetZrebov;
		celkovyPocetZrebov = pomocna;
	}
	PripravZreby(celkovyPocetZrebov);
	Losovanie(celkovyPocetZrebov, pocetLosovanychZrebov);
	VypisVysledkov(pocetLosovanychZrebov, celkovyPocetZrebov);
	ZrusZreby();


}