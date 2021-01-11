#include <stdio.h>
#define DIM 5

//funzione che legge input e memorizza in un array
int leggi(int a[], int length){
	
	//dichiarazione variabili
	int errore = 0;
	int numero;
	
	//leggo input e memorizzo in un array se numero positivo
	for (int i = 0; i < length && errore == 0; i++){
		
		//acquisizione input
		printf("Inserisci il numero: ");
		scanf("%d", &numero);
		
		//controllo che sia un numero positivo
		if(numero > 0){
			a[i] = numero;
		}
		else{
			errore = 1;
		}
	}
	return errore;
}

//funzione per il calcolo del massimo
int max(int a[], int length){
	
	//dichiarazione variabili
	int max = 0;
	
	for(int i = 0; i < length; i++){
		
		//controllo max
		if(a[i] > max){
			max = a[i];
		}
	}
	return max;
}

//funzione per il calcolo del minimo
int min(int a[], int length){
	
	//dichiarazione variabili
	int min = a[0];
	
	for(int i = 0; i < length; i++){
		
		//controllo minimo
		if(a[i] < min){
			min = a[i];
		}
	}
	return min;
}

//calcolo della media
float calcoloMedia(int a[], int length){
	
	//dichiarazione variabili
	float media = 0;
	int somma = 0;
	
	for(int i = 0; i < length; i++){
		
		//calcolo media
		somma+= a[i];
	}
	media = (double)somma / DIM;
	return media;
}

//funzione per il calcolo della moda
int calcoloModa(int a[], int length){
	
	//dichiarazione variabili
	int occorrenze[DIM] = {0,0,0,0,0};
	int max = 1;
	int moda = 0;
	
	//conto occorrenze
	for(int i = 0; i < length; i++){
		
		//controllo se uguale
		for(int j = 0; j < length; j++){
			
			if(a[i] == a[j]){
				occorrenze[i]++;
			}
		}
	}
	
	//controllo chi ha più occorrenze
	for(int j = 0; j < length; j++){
		
		if(occorrenze[j] > max){
			moda = a[j];
			max = occorrenze[j];
		}
	}
	
	return moda;
	
}

//funzione per il caclolo della mediana
int calcoloMediana(int a[], int length){
	int mediana = 0;
	
	if(length % 2 == 0){
		mediana = (a[length/2] + a[(length/2)+1])/2;
	}
	else{
		mediana = a[(length + 1) / 2];
	}
	return mediana;
}


int main(void){
	
	//dichiarazione variabili
	int numeri[DIM];
	int err = leggi(numeri, DIM);
	int massimo;
	int minimo;
	float media;
	int moda;
	int mediana;
	
	
	if(err == 0){
		
		//calcolo del massimo
		massimo = max(numeri, DIM);
		
		//calcolo del minimo
		minimo = min(numeri, DIM);
		
		//calcolo media
		media = calcoloMedia(numeri, DIM);
		
		//calcolo moda
		moda = calcoloModa(numeri, DIM);
		
		//calcolo della mediana
		mediana = calcoloMediana(numeri, DIM);
		
		//comunicazione risultati
		printf("Il massimo è: %d\n", massimo);
		printf("Il minimo è: %d\n", minimo);
		printf("La media vale: %.2f\n", media);
		printf("La moda è: %d\n", moda);
		printf("La mediana è: %d\n", mediana);
		
	}
	else{
		printf("Errore, è stato inserito un numero negativo.\n");
	}
	
}
