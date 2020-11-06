#include <stdio.h>

int main(void){
	
	//base e esponente
	int base;
	int esponente;
	int result = 1;
	
	do{
		printf("Inserire la base della potenza: ");
		scanf("%i", &base);
		
		printf("Inserire l'esponente della potenza: ");
		scanf("%i", &esponente);
		
	}while(!(esponente >= 0 && base != 0));
	
	for(int i=1; i<=esponente; i++){
		result*= base;
	};
	printf("Il risultato di %i elevato alla %i è uguale a %i: \n", base, esponente, result);
	
	
	return 0;
}
