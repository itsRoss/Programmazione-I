#include <stdio.h>

int main(void){
	
	//numero
	int multiplo;
	float result = 0.0;
	int continua = 1;
	int i;

	//inserimento multiplo 
	do{
		printf("Inserire il multiplo: ");
		scanf("%i", &multiplo);
				
	}while(!(multiplo >= 1));
	
	//calcolo serie armonica
	for(i=1; continua == 1 ; i++){
		//calcolo serie
		if(i%multiplo == 0){
			result += 1.0/i;
			
			//comunicazione punto intermedio
			printf("\nSei arrivato fino a 1/%i\n", i);
			printf("Il risultato della serie armonica è uguale a: %f\n", result);
		}
		
		
		//richiesta di continuare
		printf("\nVuoi continuare? [1 = si, 0 = no] \n");
		scanf("%d", &continua);

		
	};
	
	/*//comunicazione risultato
	printf("\nIl programma è terminato, sei arrivato fino a 1/%i\n", i-1);
	printf("Il risultato della serie armonica è uguale a: %f\n", result);*/
	
	
	return 0;
}
