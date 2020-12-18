#include <stdio.h>

int main(void){
	int n;
	
	//acquisizione dati
	printf("Inserisci il numero da visualizzare al contrario: ");
	scanf("%i", &n);
	
	//n = 1746; //Debug con caso di test
	
	while(n != 0){
		//stampo la cifra a dx
		printf("%i", n%10); 
		n = n/10;
	}
	
	printf("\n");
	return 0;
}
