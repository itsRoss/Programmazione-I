#include <stdio.h>

int main(void){
	int n;
	
	//acquisizione dati
	printf("Inserisci il numero da visualizzare al contrario: ");
	scanf("%i", &n);
	
	do{
		//stampo la cifra a dx
		printf("%i", n%10); 
		n = n/10;
	
	}while(n != 0 );
	
	printf("\n");
	return 0;
}
