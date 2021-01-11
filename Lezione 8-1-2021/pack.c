#include <stdio.h>
#define DIM 6


//funzione pack
void pack(int a[], int length){
int count = 0;
	
	if(length % 2 == 0){
		
		for(int i = 0; i < length; i = i + 2, count++){
			
			a[count] = a[i] + a[i + 1];
		}
	
	}
	else{
		for(int i = 0; i < length -1; i = i + 2, count++){
			
			a[count] = a[i] + a[i + 1];
		
			
		}
		a[count] = a[length - 1];
	}
	
	
}

int main(void){

	//dichiarazione variabili
	int a[DIM];
	int length = DIM;
	//acquisizione valori
	for(int i = 0; i < DIM; i++){
		//inserimento
		printf("Inserisci il valore: ");
		scanf("%d", &a[i]);
	}
	
	//pack
	pack(a, DIM);
	

	if(DIM % 2 == 0){	
		for(int i = 0; i < length / 2 ; i++){
			printf("[%d]", a[i]);
		}
	}
	else{
		for(int i = 0; i < length / 2 + 1; i++){
			printf("[%d]", a[i]);
		}
	}
	printf("\n");
	
}

