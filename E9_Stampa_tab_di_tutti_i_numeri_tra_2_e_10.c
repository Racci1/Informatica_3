#include<stdio.h>
#include<stdlib.h>
#include<MATH.H>

/* Stampare le tabelline di tutti i numeri naturali compresi tra 2 e 10
   Autore: Matteo Raccichini - Classe: 3° INA - Data: 18/12/2016 - Versione: 1.0 */

int main()
{
    int N; //variabile che contiene N
    int I; //variabile che contiene I
    int Tab; //variabile che contiene Tab
    N=2;
    while(N<=10){
                 I=1;
                 Tab=0;
                 while(I<=10){
                              Tab=N*I;
                              printf("\n %d", Tab);
                              I++;
                              }
                 printf("\n");
                 N=N+1;
                 }
}
