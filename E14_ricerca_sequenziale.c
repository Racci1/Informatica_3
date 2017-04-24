#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* Ricerca sequenziale di un array
   Autore: Matteo Raccichini - Classe: 3° INA - Data: 24/04/2017 - Versione: 1.0 */
   
int main()
{
	// Blocco che contiene la dichiarazione delle variabili
	int K; // variabile contatore che contiene K
	int I; // variabile contatore che contiene I
	int v[]={1,2,3,4,5,6,7,8,9,10}; // variabile che contiene il vettore
	int n; // variabile che contiene il numero da cercare
	int trovato; // flag di uscita
	int pos; // posizione elemento trovato
	
	// Inizio Programma
	// Input numero da cercare
	printf("\n Inserire n ");
	scanf("%d",&n);
	// Considero v gia' caricato con numeri interi
	I=0; // Inizializzazione di I
	trovato=0; // Inizializzazione di trovato
	// Ricerca del numero
	while(I<10 && !trovato){
			// Verifica se il numero si trova nell'array e incremento dei valori
			if(n==v[I])
			{
				pos=I;
				trovato=1;
			}
			I++;
	}
	// Stampa la posizione se il numero si trova nell'array
	if(trovato==1)
	{
		printf("\n Numero in posizione: %d",pos);
	}
	else{
		printf("\n Il numero non si trova nell'array");
	}
}
