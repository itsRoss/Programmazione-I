#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	char win;
	char tc;
	srand (time(NULL));
	int numeroRandom = rand() %2 == 0;
	
	//acquisizione dati
	printf("testa o croce? [t/c]: ");
	scanf("%c", &tc);
	
	//genero numero random che corrisponde a testa	
	if( numeroRandom == 0){
		win = 't';
		
	}
	//genero numero random che corrisponde a croce
	else if(numeroRandom == 1){
		win = 'c';
	}
	
	//comunico risultato
	if( win == 't'){
		printf("Testa.");
	}
	else{
		printf("Croce.");
	}
	if( win == tc){
		printf("Hai vinto!!\n");
	}
	else{
		printf("Hai perso!!\n");
	}
	
	return 0;
}
