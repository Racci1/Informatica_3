#include<stdio.h>
#include<stdlib.h>
#include<MATH.H>

/* Calcolo della media di n numeri
   Autore: Matteo Raccichini - Classe: 3° INA - Data: 03/01/2017 - Versione: 1.0 */

int main()
{
    int n; // variabile che contiene n
    int Somma; // variabile che contiene somma
    int I; // variabile che contiene I
    int Num; // variabile che contiene Num
    int Media; // variabile che contiene Media
    printf("\n Inserire n "); // chiedi al video misura di n
    scanf("%d",&n); // indica indirizzo iniziale di n
    Somma=0; // inizializzaqzione di somma
    I=0; // inizializzazione di I
    while(I<n)
         {
              printf("\n Inserire Num "); // chiedi al video misura di Num
              scanf("%d",&Num); // indica indirizzo iniziale di Num
              Somma=Somma+Num;
              I=I+1; // incremento I di 1
              }
    Media=Somma/n;
    printf("\n %d", Media); // stampare media
}
              
