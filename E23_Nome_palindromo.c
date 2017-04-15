#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* Nome palindromo
   Autore: Matteo Raccichini - Classe: 3° INA - Data: 15/04/2017 - Versione: 1.0 */
   
int main()
{
    // blocco che contiene la dichiarazione delle variabili
    int Cont; // variabile contatore che contiene Cont
    int I; // variabile contatore che contiene I
    char parola[100]; // variabile che contiene la stringa parola[100]
    int palindromo; // variabile che contiene palindromo
    int medio; // variabile che contiene medio
    // Inizio programma
    // Input di un nome
    printf("\n Inserire un nome ");
    scanf("%s",parola);
    Cont=0;
    // Ciclo che incrementa il contatore Cont
    while(parola[100]!='\0'){
       Cont++;
    }
    I=0;
    palindromo=1;
    medio=Cont/2;
    // Ciclo che stabilisce se iòl nome è palindromo
    while(I<medio && palindromo==1){
       if(parola[100]!=parola[I])
       {
           palindromo=0;
       }
       Cont--;
       I++;
    }
    // se il nome è palindromo stampa il primo messaggio altrimenti stampa il secondo
    if(palindromo==1){
      printf("\n Il nome è palindromo ");
    }
    else{
      printf("\n Il nome non è palindromo ");
    }
}
