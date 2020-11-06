#include <stdio.h>

int main(void){
	
	//numero
	int n;
	float result = 0.0;
	
	//acquisizione dati
	do{
		printf("Inserire il numero: ");
		scanf("%i", &n);
				
	}while(!(n >= 1));
	
	//calcolo serie armonica
	for(int i=1; i <=n; i++){
		result += 1.0/i;
	};
	printf("Il risultato della serie armonica è uguale a: %f\n", result);
	
	
	return 0;
}
