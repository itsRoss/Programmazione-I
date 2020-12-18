#include <stdio.h>
#define DIM 9

int main(void){
	
	//variabili 
	char a[DIM];
	char result[DIM];
	char c, r;
	//acquisizione dati
	for (int i = 0; i < DIM; i++) {
		printf("Inserisci il carattere: ");
		scanf(" %c", &a[i]);
	}
	printf("Inserisci il carattere c: ");
	scanf(" %c", &c);
	printf("Inserisci il carattere r: ");
	scanf(" %c", &r);
	
	//sostituzione del carattere
	for (int i = 0; i < DIM; i++) {
		if (a[i] == 'c') {
			result[i] = 'R';
		}
		else if (a[i] == 'r') {
			result[i] = 'F';
		}
		else{
			result[i] = a[i];
		}
	}
	//comunicazione risultato
	for (int i = 0; i < DIM; i++) {
		printf("%c ", result[i]);
	}
	printf("\n");
	
	
	
	return 0;
}
