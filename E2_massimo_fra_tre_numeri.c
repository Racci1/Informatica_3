#include<stdio.h>
#include<stdlib.h>
#include<MATH.H>
// Matteo Raccichini, 3° INA, 14/11/2016
// Massimo fra tre numeri
main()
{
	int NUM_1;                           //variabile che contiene il numero1
	int NUM_2;                           //variabile che contiene il numero2
	int NUM_3;                           //variabile che contiene il numero3
	int NUM_MAX;                         //variabile che contiene il numero massimo
	printf("\n Inserire NUM_1 ");         //chiedi al video misura di NUM_1
	scanf("%d",&NUM_1);                  //indica indirizzo iniziale di NUM_1
	printf("\n Inserire NUM_2 ");         //chiedi al video misura di NUM_2
	scanf("%d",&NUM_2);                  //indica indirizzo iniziale di NUM_2
	printf("\n Inserire NUM_3 ");         //chiedi al video misura di NUM_3
	scanf("%d",&NUM_3);                  //indica indirizzo iniziale di NUM_3
	if (NUM_1>NUM_2) { 
		NUM_MAX=NUM_1;
	}
	else NUM_MAX=NUM_2;
	
	if (NUM_3>NUM_MAX) { 
		NUM_MAX=NUM_3;
	}
	printf("\n NUM_MAX= %d",NUM_MAX);
}
