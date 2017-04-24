#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* Filtrare gli elementi di un array
   Autore: Matteo Raccichini - Classe: 3° INA - Data: 24/04/2017 - Versione: 1.0 */
   
int main()
{
	// blocco che contiene la dichiarazione delle variabili
	int I; // variabile contatore che contiene I
	int numeri[10]; // variabile che contiene l'array
	int x; // variabile contatore che contiene x
	int pari[10]; // variabile che contiene l'array pari
	
	// Inizio Programma
	// Input dell'array numeri
	for(I=0;I<=9;I++){
		printf("\n Inserire elemento nell'array ");
		scanf("%d",&numeri[I]);
	}
	x=0; // Inizializzazione di x
	// ciclo che riconta gli elementi dell'array numeri
	for(I=0;I<10;I++){
		// If che verifica se l'elemento considerato e' pari
		if(numeri[I]%2==0)
		{
			pari[x]=numeri[I];
			x++;
		}
	}
	// Stampa dell'array pari
	for(I=0;I<x;I++){
		printf("\n %d",pari[I]);
	}
}
