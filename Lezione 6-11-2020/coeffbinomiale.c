#include <stdio.h>

int main(void){
	
	//dichiarazione a e n
	int i;
	int a, n;
	int result = 1;
	
	//acquisizione dati
	do{
		
		printf("Inserisci il numero a e il numero b: \n");
		scanf("%i %i", &a, &n);
		
	}while(!(n < a));
	
	for(i = 1; i < n; i++){
		result *= ((a - i + 1)/i);
	}
	printf("Il risultato del coefficiente binomiale vale: %i\n", result);
	
	return 0;
}
