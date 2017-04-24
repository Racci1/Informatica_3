#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* Eliminazione di un elemento di un array con shift
   Autore: Matteo Raccichini - Classe: 3° INA - Data: 24/04/2017 - Versione: 1.0 */
   
int main()
{
	// Blocco che contiene la dichiarazione delle variabili
	int I; // variabile contatore che contiene I
	int v[]={1,2,3,4,5,6,7,8,9,10}; // variabile che contiene il vettore
	int tot; // variabile che contiene tot
	int pos; // posizione elemento trovato
	
	// Inizio Programma
	tot=10; // Inizializzazione di tot
	// Consideriamo l'array v gia' caricato
	// Leggo in input la posizione dell'elemento da eliminare
	printf("\n Inserire posizione ");
	scanf("%d",&pos);
	// Shift per eliminare il numero scelto
	for(I=pos;I<(tot-1);I++){
		v[I]=v[I+1];
	}
	tot--; // Decremento di tot
	// Stampa dell'array modificato
	for(I=0;I<tot;I++){
		printf("\n %d",v[I]);
	}
}
