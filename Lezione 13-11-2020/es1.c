#include <stdio.h>

int main(void){
	
	//diachiarazione variabili
	int n;
	
	//acquisizione dati
	printf("Inserisci un numero intero: \n");
	scanf("%i", &n);
	
	//caso numero positivo
	if( n >= 0 ){
		printf("Il numero è positivo \n");
	}
	//caso numero negativo
	else{
		printf("Il numero è negativo \n");
	}
	
	return 0;
}
