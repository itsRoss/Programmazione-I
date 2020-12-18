#include <stdio.h>
#define DIM 10
int main(void){
	
	//array dei numeri
	int a[DIM];
	int b[DIM];
	char operazione;
	int res[DIM];
	int scalare = 0;
	
	//acquisizione dati di a
	printf("insersci i valori di a: \n");
	for(int i = 1; i < DIM; i++){
		scanf("%i", &a[i]);
	}
	//acquisizione dati di b
	printf("insersci i valori di b: \n");
	for(int i = 1; i < DIM; i++){
		scanf("%i", &b[i]);
	}

	
	//scelta operazione
	printf("Cosa vuoi fare:  [+,-,*,x]\n");
	scanf(" %c", &operazione);
	
	switch(operazione){
		case '+':
			for(int i = 1; i < DIM; i++){
				res[i] = a[i] + b[i];
			}
			break;
		
		case '*':
			for(int i = 1; i < DIM; i++){
				res[i] = a[i] * b[i];
			}
			break;
		
		case '-':
			for(int i = 1; i < DIM; i++){
				res[i] = a[i] - b[i];
			}
			break;
		
		
		case 'x':
			for(int i = 1; i < DIM; i++){
				scalare += a[i] * b[i];
			}
			break;
		}
		//comunicazione  risultati
		printf("Ecco il risultato: ");
		if( operazione != 'x'){
			for(int i = 1; i < DIM; i++){
				printf("%i ", res[i]);
				
			}
		}
		else{
			printf("%i\n", scalare);
		}
	
	return 0;
}
