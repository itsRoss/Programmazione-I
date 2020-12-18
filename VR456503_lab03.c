#include <stdio.h>
#define DIM 5

int main(void) {
	//dichiarazione variabili
	int numero[5];
	int max_number = 0;
	int valido = 1;
	
	//acquisizione dati
	for ( int i = 0; i < DIM; i++) {
		printf("Inserisci il valore: ");
		scanf("%d", &numero[i]);	
			
		//controllo che il numero sia valido
		if (numero[i] < 0){
			valido = 0;
		}
		
		if(numero[i] > max_number){
			max_number = numero[i];
		}	
	}
	
	//controllo se non ho numeri negativi
	if ( valido ) {	
		//creo l'istogramma con numero di righe uguali al massimo numero inserito
		for ( int i = max_number; i > 0; i-- ) {
			
			for( int j = 0; j < DIM; j++ ) {
				
				//se l'indice della riga è maggiore del numero che sto esaminando allora devo stampare dello spazio
				if (i > numero[j] ) {
					printf("  ");
				}
				//se lìindice di riga è minore del numero allora devo stampare un asterisco
				else {
					printf(" *");
				}
			}
			printf("\n");
		}
		
		//stampo i numeri sotto l'istogramma
		for(int i = 0; i < DIM; i++){
			printf("%d ", numero[i]);
		}
		
		printf("\n");
		
	}
	else {
		printf("Errore. è stato inserito un numero negativo\n");
	}
	
	return 0;
}
