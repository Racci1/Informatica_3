#include<stdio.h>
#include<stdlib.h>
#include<MATH.H>
/* Stampa la tabellina di un numero naturale tra 2 e 10
   Autore: Matteo Raccichini - Classe: 3° INA - Data: 03/01/2017 - Versione: 1.0 */

int main()
{
    int n;                                    // variabile che contiene n
    int I;                                    // variabile che contiene I
    int Tab;                                  // variabile che contiene Tab
    do
      {
             printf("\n Inserire n ");        // chiedi al video misura di n
             scanf("%d",&n);                  // indica indirizzo iniziale di n
             }
    while ((n<2)||(n>10));
    I=1;                                      // inizializzazione di I
    Tab=0;                                    // inizializzzazione di Tab
    while (I<=10)                             // finchè la condizione è vera ripetere il ciclo
    {
          Tab=n*I;
          printf("\n %d", Tab);               // stampare Tab
          I++;                                // incremento I di 1;
          }
}
