#include<stdio.h>

/* "Biglietto_Mirabilandia"
 Autore: Matteo Raccichini; Classe: 3° INA; Data: 21/11/2016; Versione: 2.0 */
 
 main()
 {
 	char Risposta;                                      //variabile che contiene Risposta
 	char Risposta1;
 	char S;                                             //variabile che contiene Si
 	char N;                                             //variabile che contiene No
 	int Eta;                                            //variabile che contiene Età
 	int Altezza;                                        //variabile che contiene Altezza
 	float Prezzo;                                       //variabile che contiene Prezzo
 	float supplemento_intero;
 	float supplemento_ridotto;
 	float Prezzo_tot;
 	printf("Inserire \"La persona è disabile?\" "); 
 	scanf("%c",&Risposta);                              //indica indirizzo iniziale Risposta
 	S=1;
 	N=0;
 	supplemento_intero=9.50;
 	supplemento_ridotto=7.50;
 	if (Risposta=S){                                    //se la risposta è Si allora...
 		Prezzo=0;
	 }
	 else printf("Inserire Età");                       //chiedi al video misura Età
	      scanf("%d",&Eta);                             //indica indirizzo iniziale Età
	      if (Eta>=60){                                 //se l'età è maggiore o uguale a 60 allora...
	      	Prezzo=25.00;
			  }
		  else printf("Inserire Altezza");              //chiedi al video misura Altezza
		       scanf("%d",&Altezza);                    //indica indirizzo iniziale Altezza
		       if (Altezza<100){
		       	Prezzo=0;
			   }
			   else if (Altezza>=100 && Altezza<=140){
			   	     Prezzo=28.00;
			   }
			   else Prezzo=34.90;
			   printf("Prezzo=",Prezzo);
			   printf("Vuole il supplemento mirabeach?");
			   scanf("%c",&Risposta1);
			   if(Risposta1=S){
                               if(Risposta=S){
                                  Prezzo_tot=0;
                                  }
                                  else if(Prezzo<34.90){
                                       Prezzo_tot=Prezzo+supplemento_ridotto;
                                       }
                                       else Prezzo_tot=Prezzo+supplemento_intero;
                                       }
    
               printf("Prezzo_tot=",Prezzo_tot);
                                       
                                              			   
 }
