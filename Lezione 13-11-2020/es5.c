#include <stdio.h>

int main(void){
	//dichiarazione variabili
	int voto;
	int result = 0;
	char c;
	int count = 0;
	double media;
	
	do{
		
		//acquisizione dati
		printf("Inserisci un voto: ");
		scanf("%i", &voto);
		
		//calcolo media
		result += voto;
		count ++;
		
		//acquisizione dati
		printf("Vuoi continuare [s/n]: ");
		scanf(" %c", &c);
		
		
	
	}while(c == 's');
	
	//calcolo media e comunicazione risultato
	media = result/count;
	printf("la somma vale %.2f\n", media);
	
	return 0;
}
