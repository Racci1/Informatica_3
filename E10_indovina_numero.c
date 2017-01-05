#include<stdio.h>
#include<stdlib.h>
#include<MATH.H>

/* Indovina_numero 
   Autore: Matteo Raccichini - Classe: 3° INA - Data: 03/01/2017 - Versione: 1.0 */

int main()
{
    int n_c;                                                                    // variabile che contiene numero computer
    int Indovinato;                                                             // variabile che contiene Indovinato
    int T;                                                                      // variabile che contiene T
    int n_u;                                                                    // variabile che contiene numero utente
    int Versione;                                                                // variabile che contiene Versione
    int T_usati;                                                                // variabile che contiene tentativi usati
    n_c=rand();                                                                 // funzione rand per far scegliere al computer un numero casuale
    Indovinato=0;                                                               // inizializzazione di Indovinato
    T=10;                                                                       // inizializzazione di T
    printf("\n Inserire n_u ");                                                 // chiedi al video misura di n_u
    scanf("%d",&n_u);                                                           // indica indirizzo iniziale di n_u
    if(n_u==n_c)                                                                // se la condizione è vera allora...
    {
                Indovinato=1;
                }
    else {                                                                      // altrimenti...
         printf("\n Hai sbagliato ");                                           // stampare la frase
         if(Versione==0)                                                        // se la condizione è vera allora...
           {
                 if(n_u>n_c)                                                    // se la condizione è vera allora...
              {
                     printf("\n E' maggiore ");                                 // stampare la frase
                     }
           else{                                                                // altrimenti...
                printf("\n E' minore ");                                        // stampare la frase
                }
                }
    T--;                                                                        // decremento T di 1
    while((T>0)&&(Indovinato==0))                                               // finchè la condizione è vera esegui il ciclo
         {
                                 if(Indovinato==1)                              // se la condizione è vera allora...
                                   {
                                                  printf("\n Hai vinto ");      // stampare la frase
                                                  T_usati=10-T;
                                                  }
                                   else{                                        // altrimenti...
                                        printf("\n Hai perso ");                // stampare la frase
                                        }                                        
         }
}

