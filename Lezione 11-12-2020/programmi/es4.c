#include <stdio.h>
#define DIM 20

int main(void){
	
	//variabili 
	char a[DIM];
	char result[DIM];
	int somma = 0;
	
	//acquisizione dati
	for (int i = 0; i < DIM; i++) {
		printf("Inserisci il carattere: ");
		scanf(" %c", &a[i]);
	}
	
	//trovo le vocali
	for (int i = 0; i < DIM; i++) {
		switch (a[i]) {
			case 'a':
				result[i] = '1';
				somma += 1;
				break;
				
			case 'e':
				result[i] = '2';
				somma += 2;
				break;
			
			case 'i':
				result[i] = '3';
				somma += 1;
				break;
				
			case 'o':
				result[i] = '4';
				somma += 4;
				break;
			
			case 'u':
				result[i] = '5';
				somma += 5;
				break;
			
			default:
				result[i] = a[i];
				break;
				
		}
	}
	//comunicazione risultato
	for (int i = 0; i < DIM; i++) {
		printf("%c ", result[i]);
	}
	printf("\nLa somma vale: %i", somma);
	
	
	
	return 0;
}
