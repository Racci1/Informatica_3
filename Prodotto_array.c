#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* Scrivere un programma in pseudocodifica e successivamente in C che dato un vettore di K elementi con K compreso fra n1 e n2 con n2<1000
   e dispari e uno scalare num intero effettui il prodotto tra lo scalare e il vettore. 
   Autore: Matteo Raccichini - Classe: 3° INA - Data: 30/01/2017 - Versione: 1.0 */
   
int main()
{
	int N2;                                          // variabile che contiene N2
	int N1;                                          // variabile che contiene N1
	int K;                                           // variabile che contiene K
	int numeri[999];                                 // variabile che contiene un vettore di K elementi
	int I;                                           // variabile che contiene I
	int Num;                                         // variabil
	
	do{                                              // inizio do-while
		printf("\n Inserire N2 ");                   // chiedi al video misura di N2
		scanf("%d",&N2);                             // indica indirizzo iniziale di N2
	}                                                // fine do-while
	while((N2<0)||(N2>1000)||(N2%2==0));
	do{                                              // inizio do-while
		printf("\n Inserire N1 ");                   // chiedi al video misura di N1
		scanf("%d",&N1);                             // indica indirizzo iniziale di N1
	}                                                // fine do-while
	while((N1<0)||(N1>N2));
	do{                                              // inizio do-while
		printf("\n Inserire K ");                    // chiedi al video misura di K
		scanf("%d",&K);                              // indica indirizzo iniziale di K
	}                                                // fine do-while
	while((K<N1)||(K>N2));
	printf("\n Inserire Num ");                      // chiedi al video misura di Num
	scanf("%d",&Num);                                // indica indirizzo iniziale di Num
	for(I=0;I<K;I++){                                // ciclo for (inizializzazione di I a 0; condizione per cui I deve essere minore di K; Incremento di I di 1)
		printf("\n Inserire numero nel vettore ");   // chiedi al video misura di un numero
		scanf("%d",&numeri[I]);                      // indica indirizzo iniziale di numeri[I]
	}                                                // fine for
	for(I=0;I<K;I++){                                // ciclo for (inizializzazione di I a 0; condizione per cui I deve essere minore di K; incremento di I di 1)
	    
		numeri[I]=numeri[I]*Num;                 
		printf("\n %d",numeri[I]);                   // stampare il vettore
	}                                                // fine for
}                                                    // fine programma                                                         
