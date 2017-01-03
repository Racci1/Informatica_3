#include<stdio.h>
#include<stdlib.h>
#include<MATH.H>

/* Dato un numero naturale calcolare il suo fattoriale 
   Autore: Matteo Raccichini - Classe: 3° INA - Data: 03/01/2017 - Versione: 1.0 */

int main()
{
    int n;                              // variabile che contiene n
    int Fat;                            // variabile che contiene Fat
    int I;                              // Variabile che contiene I
    printf("\n Inserire n ");           // chiedi al video misura di n
    scanf("%d",&n);                     // indica indirizzo iniziale di n
    Fat=1;                              // inizializzazione di Fat
    I=0;                                // inizializzazione di I
    while(I<n)
         {
              Fat=Fat*(n-I);
              I=I+1;                    // incremento di I di 1
              }
    printf("\n %d", Fat);               // stampare Fat
}
