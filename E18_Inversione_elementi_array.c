#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* Inversione degli elementi di un array
   Autore: Matteo Raccichini - Classe: 3° INA - Data: 24/04/2017 - Versione: 1.0 */
   
int main()
{
	// Blocco che contiene la dichiarazione delle variabili
	int I; // variabile contatore che contiene I
	int n[]={1,2,3,4,5,6,7,8,9,10}; // variabile che contiene il vettore
	int x; // variabile contatore che contiene x
    int A; // variabile che contiene A
	
	// Inizio Programma
	// Considero n gia' caricato
	x=0; // Inizializzazione di x
	// Inversione degli elementi dell'array
	for(I=9;I>x;I--){
		A=n[I];
		n[I]=n[x];
		n[x]=A;
		x++;
	}
	// Stampa array modificato
	for(I=0;I<10;I++){
		printf("\n %d",n[I]);
	}
}
