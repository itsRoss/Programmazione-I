#include <stdio.h>

int main(void){
	//dichiarazione variabili
	int giorno;
	int mese;
	int anno;
	int max;
	int valido = 0;
	
	//acquisizione dati
	printf("Inserisci una data nel formato gg/mm/aaaa : \n");
	scanf("%i/%i/%i", &giorno, &mese, &anno);
	
	//controllo il mese
	if( anno > 999 || anno < 9999){
		switch( mese ) {
			//caso mesi con 30 giorni
			case 11:
			case 4:
			case 6:
			case 9:
				max = 30;
				break;
			
			//controllo su febbrario
			case 2:
				//controllo se l'anno è bisestile
				if( anno % 4 == 0 || ( anno % 100 == 0 && anno % 400 == 0)){
					//controllo il numero di giorni nel caso in cui sia bisestile
					max = 29;
				}
				//se non è bisestile
				else{
					max = 28;
				}
				break;
			//mesi con 31 giorni
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				max = 31;
				break;
			
			default:
				valido = 0;
				break;
			
		}
		if( giorno >= 1 && giorno <= max){
			valido = 1;
		}
		else{
			valido = 0;
		}
	}
	else{
		valido = 0;
	}
	
	//comunicazione risultati
	if( valido == 1 ){
		printf("Hai inserito una data valida \n");	
	}
	else{
		printf("Hai inserito una data non valida \n");
	}
		
		
	
	return 0;
}
