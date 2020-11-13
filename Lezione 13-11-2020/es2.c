#include <stdio.h>

int main(void){
	//dichiarazione variabili
	int n;
	
	//acquisizione dati
	printf("Inserisci un numero intero: \n");
	scanf("%i", &n);
	
	//caso negativo	
	if( n < 0 ){
		printf("Il numero è negativo \n");
	}
	//caso positivo
	else if( n > 0 ){
		printf("Il numero è positivo \n");
	}
	//caso numero nullo -> 0 
	else{
		printf("Il numero è nullo \n");
	}

	
	
	
	return 0;
}
