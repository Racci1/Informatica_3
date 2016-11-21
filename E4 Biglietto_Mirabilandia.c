#include<stdio.h>

/* "Biglietto_Mirabilandia"
 Autore: Matteo Raccichini; Classe: 3° INA; Data: 21/11/2016; Versione: 1.0 */
 
 main()
 {
 	char Risposta;                                      //variabile che contiene Risposta
 	char S;                                             //variabile che contiene Si
 	char N;                                             //variabile che contiene No
 	int Età;                                            //variabile che contiene Età
 	int Altezza;                                        //variabile che contiene Altezza
 	float Prezzo;                                       //variabile che contiene Prezzo
 	float supplemento_intero;
 	float supplemento_ridotto;
 	float Prezzo_tot;
 	printf("Inserire \"La persona è disabile?\" "); 
 	scanf("%c",&Risposta);                              //indica indirizzo iniziale Risposta
 	S=Si;
 	N=No;
 	supplemento_intero=9,50;
 	supplemento_ridotto=7,50;
 	if (Risposta=S){                                    //se la risposta è Si allora...
 		Prezzo=0;
	 }
	 else printf("Inserire Età");                       //chiedi al video misura Età
	      scanf("%d",&Età);                             //indica indirizzo iniziale Età
	      if (Età>=60){                                 //se l'età è maggiore o uguale a 60 allora...
	      	Prezzo=25,00;
			  }
		  }
		  else printf("Inserire Altezza");              //chiedi al video misura Altezza
		       scanf("%d",&Altezza);                    //indica indirizzo iniziale Altezza
		       if (Altezza<100){
		       	Prezzo=0;
			   }
			   else if (Altezza>=100 && Altezza<=140){
			   	     Prezzo=28,00;
			   }
			   else Prezzo=34,90;
			   printf("Vuole il supplemento mirabeach?");
			   scanf("%c")
			   
 }
