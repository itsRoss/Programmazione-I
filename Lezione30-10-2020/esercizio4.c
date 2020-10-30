#include <stdio.h>

int main(void){
	//dichiarazione variabili
	int n;
	int strette = 0;
	
	printf("Inserisci il numero di partecipanti: ");	
	scanf("%d", &n);
	
	for(int i = 1; i<= n; i++){
		strette = strette - i;	
	}

	printf("Il numero di strette di mano è: %i\n", strette);
	
	return 0;
}
