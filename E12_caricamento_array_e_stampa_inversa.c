#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* Caricamento di un array e stampa inversa
   Autore: Matteo Raccichini - Classe: 3° INA - Data: 15/04/2017 - Versione: 1.0 */
   
int main()
{
    // blocco che contiene la dichiarazione delle variabili
    int numeri[10]; // variabile che contiene l'array numeri[10]
    int x; // variabile contatore che contiene x
    // Inizio programma
    // Input dell'array
    for(x=0;x<=9;x++){
      printf("\n Inserire numero ");
      scanf("%d",&numeri[x]);
    }
    // Stampa inversa dell'array
    for(x=9;x>=0;x--){
      if(numeri[x]!=0)
      {
         printf("\n %d",numeri[x]);
      }  
    }
}
