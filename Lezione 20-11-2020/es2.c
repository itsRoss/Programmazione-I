#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	
	//variabili
	int numPartite;
	srand (time(NULL));
	int numeroRandom = rand() %3 ;
	char pc, utente;
	int vittorie = 0, sconfitte = 0, pareggi = 0;
	
	//acquisizione numero partite
	printf("Quante partite vuoi giocare?: ");
	scanf("%d", &numPartite);
	
	while(numPartite !=0){
		
		//acquisizione dati partita
		printf("Sasso Carta o Forbice? [s/c/f]: ");
		scanf(" %c", &utente);
		
		//pc sceglie sasso
		if( numeroRandom == 0){
			pc = 's';
		}
		//pc sceglie carta
		else if( numeroRandom == 1){
			pc = 'c';
		}
		//pc sceglie forbice
		else if( numeroRandom == 2){
			pc = 'f';
		}
		
		//controllo vittoria/sconfitta
		if( utente == pc){
			pareggi++;
		}
		else if( utente == 's' && pc == 'f' ){
			vittorie++;
			
		}
		else if( utente == 'f' && pc == 'c' ){
			vittorie++;
		}
		else if( utente == 'c' && pc == 's' ){
			vittorie++;
		}
		else{
			sconfitte++;
		}
		 numPartite--;

	}
	
	//comunicazione risultati
	printf("Hai vinto %d volte, perso %d volte e pareggiato %d volte\n", vittorie, sconfitte, pareggi);
	
	
	
	
	return 0;
}
