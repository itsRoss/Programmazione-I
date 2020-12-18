#include <stdio.h>
#define DIM 10
int main(void){
	
	//array dei numeri
	int numeri[DIM];
	
	//acquisizione dati
	for(int i = 1; i < DIM; i++){
		printf("Inserisci il numero: ");
		scanf("%i", &numeri[i]);
	}
	
	//stampo numeri
	printf("Ecco i numeri più grandi di %i: ", numeri[DIM - 1]);
	for(int i = 1; i < DIM; i++){
		if( numeri[i] >= numeri[DIM - 1]){
			printf("%i\n", numeri[i]);
		}
	}
	
	
	return 0;
}
