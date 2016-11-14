#include<stdio.h>
#include<stdlib.h>
#include<MATH.H>
// Matteo Raccichini, 3° INA, 14/11/2016
// Scambio di valori tra due variabili
main()
{
	int A;                    //variabile che contiene A
	int B;                    //variabile che contiene B
	int TEMP;                 //variabile che contiene la variabile temporanea
	printf("\n Inserire A ");  //chiedi al video la misura di A
	scanf("%d",&A);           //indica indirizzo iniziale di A
	printf("\n Inserire B ");  //chiedi al video la misura di B
	scanf("%d",&B);           //indica indirizzo iniziale di B
	TEMP=A;
	A=B;
	B=TEMP;
	printf("\n A= %d",A);
	printf("\n B= %d",B);
}
