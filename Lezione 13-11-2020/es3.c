#include <stdio.h>

int main(void){
	//dichiarazione variabili
	int n;
	int result;
	
	//acquisizione dati
	printf("Inserisci un numero intero: \n");
	scanf("%i", &n);
	
	//controllo pari o dispari
	( n % 2 == 0 ) ? result = 0 : 1;
	//comunicazione risultato
	( result == 0 ) ? printf("Numero pari \n") : printf("Numero dispari \n");
	
	
	return 0;
}
