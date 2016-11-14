#include<stdio.h>
#include<stdlib.h>
#include<MATH.H>
// Matteo Raccichini, 3° INA, 14/11/2016
// Somma dei primi 100 numeri
main()
{
	int SOMMA; //variabile che contiene la SOMMA
	int I; //variabile che contiene I
	SOMMA=0;
	I=1;
	while(I<=100){
		SOMMA=SOMMA+I;
		I=I+1;
	}
	printf("\n SOMMA= %d",SOMMA);
}
