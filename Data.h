#pragma once
//#define LONG long
#ifdef WIN32
	typedef long LONG; //ak som na Win, tak pretypuje na LONG	
#else 
	typedef int LONG; //inak int
#endif
struct Zreb {
	char kod;
	LONG cislo;

};

extern struct Zreb * zreby; //deklaracia

void PripravZreby(unsigned int celkovyPocetZrebov);
void ZrusZreby();

