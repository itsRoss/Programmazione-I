#include <stdio.h>

int main(void){
	
	//voto inserito dall'utente
	int voto = 0;
	int minimo = 0;
	int massimo = 0;
	//somma dei voti inseriti
	int sommaVoti = 0;
	//variabile utilizzata per contare i numeri inseriti
	int count = 0;
	float media;
	
	
	do{
		
		//acquisizione dati
		printf("Inserisci il voto: ");
		scanf("%i", &voto);
		
		// se è il primo numero della serie assegno sia a massimo che a minimo il voto
		if( count == 0){
			minimo = voto;
			massimo = voto;
		}
		
		//controllo che il voto sia compreso tra 18 e 30 altrimenti mi calcola anche il voto inserito per ultimo per terminare la serie
		if(voto >= 18 && voto <= 30){
			
			//se il voto è maggiore del massimo allora diventa il massimo della serie
			if(voto > massimo){
				massimo = voto;
			}
			//se il voto è minore del minimo allora diventa il minimo della serie
			else if( voto < minimo){
				minimo = voto;
			}
			//sommo i vari voti inseriti nella sequenza
			sommaVoti += voto;
			count++;
		}
		
	}while(voto >= 18 && voto <= 30);
	
	//calcolo della media dei voti
	media = (float) sommaVoti/count;
	
	//comunicazione dei risultati
	printf("Il massimo voto della sequenza di %i numeri è: %i, il minimo è: %i, la media vale: %.2f \n", count, massimo, minimo, media);
	
	return 0;
}
