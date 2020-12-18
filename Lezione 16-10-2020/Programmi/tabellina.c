#include <stdio.h>
int main(){	
	
	//numero di cui calcolare la tabellina
	int n;
	
	//numero fino a cui contare
	int x;
				
	//inserimento valori
	printf("Inserisci il numero di cui vuoi calcolare la tabellina: \n");
	scanf("%d", &n);
	
	printf("Inserisci il numero fino a cui vuoi calcolare: \n");
	scanf("%d",&x);
	
	//calcolo tabellina
	printf("Tabellina del numero %d \n", n);
	
	for(int i = 1; i<= x; i++){
		
		printf("%d \n", n*i);
		
	}
	
    return(0);
}
