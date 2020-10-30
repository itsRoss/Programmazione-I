#include <stdio.h>

int main(void){
	//dichiarazione variabili
	int n;
	int somma = 0;
		
	do{
		//acquisizione dati
		printf("Inserisci un numero: ");
		scanf("%i", &n);
		//sommo i numeri della sequenza
		somma += n;
		
	}while(n != 0 );
	
	//comunicazione risultato
	printf("La somma della tua sequenza vale: %i\n", somma);
	
	return 0;
}
