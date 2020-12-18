#include <stdio.h>
#define DIM 5

int main(void){
	
	//variabili 
	int a[DIM];
	int somma[DIM];
	
	for(int i = 0; i < DIM; i++){
		printf("Inserisci il numero: ");
		scanf("%i", &a[i]);
	}
	somma[0] = a[0];
	somma[1] = a[1];
	for(int i = 2; i < DIM; i++){
		somma[i] = a[i] + somma[i - 2];
	}
	for(int i = 0; i < DIM; i++){
		printf("%i\n", somma[i]);
	}
	
	
	
	return 0;
}
