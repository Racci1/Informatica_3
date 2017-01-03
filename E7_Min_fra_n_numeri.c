#include<stdio.h>
#include<stdlib.h>
#include<MATH.H>
 
/* Dati n numeri interi ( n scelto dall'utente ), calcolare il numero minimo
   Autore: Matteo Raccichini - Classe: 3° INA - Data: 03/01/2017 - Versione: 1.0 */

int main()
{
    int n;                                   // variabile che contiene n
    int Min;                                 // variabile che contiene Min
    int I;                                   // variabile che contiene I
    int Num;                                 // variabile che contiene Num
    printf("\n Inserire n ");                // chiedi al video misura di n
    scanf("%d",&n);                          // indica indirizzo iniziale di n
    printf("\n Inserire Min ");              // chiedi al video misura di Min
    scanf("%d",&Min);                        // indica indirizzo iniziale di Min
    I=1;                                     // inizializzazione di I
    while(I<n)
         {
              printf("\n Inserire Num ");    // chiedi al video misura di Num
              scanf("%d",&Num);              // indica indirizzo iniziale di Num
              if(Num<Min)
                {
                         Min=Num;
                         }
              I=I+1;                         // incremento I di 1
              }
    printf("\n %d", Min);                    // stampare Min
}
    
    
