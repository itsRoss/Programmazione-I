#include <stdio.h>
int main(){	
	
	//numero di cui calcolare il fattoriale
	int n;
	
	//fattoriale di zero 
	int result = 1;
				
	//inserimento valori
	printf("Inserisci il numero di cui vuoi calcolare il fattoriale: \n");
	scanf("%d", &n);
	
	//calcolo fattoriale
	printf("Fattoriale del numero: %d \n", n);
	
	for(int i = 1; i<= n; i++){
		result = result * i;	
	}
	
	//comunicazione risultato
	printf("Il risultato è: %d \n", result);
    
    return(0);
}
