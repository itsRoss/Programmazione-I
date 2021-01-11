#include <stdio.h>
#define DIM 6


//funzione per il riordino dei numeri
void riordina(int a[], int length){
	int d = 0;
	int p = length -1;
	int tmp;
	
	while(d < p){
		
		while(a[d] % 2 == 1)
			d++;
			
		while(a[p] % 2 == 0)
			p--;
			
			
		if(d < p){
			tmp = a[p];
			a[p] = a[d];
			a[d] = tmp;
		}
	}

}

int main(void){

	//dichiarazione variabili
	int arr[DIM];

	
	for(int i = 0; i < DIM; i++){
		printf("Inserisci il numero: ");
		scanf("%d", &arr[i]);
	}
	
	//chiamata riordino
	riordina(arr, DIM);
	
	//stampo risultati
	for(int i = 0; i < DIM; i++){
		printf("%d", arr[i]);
		
	}
	printf("\n");
}
