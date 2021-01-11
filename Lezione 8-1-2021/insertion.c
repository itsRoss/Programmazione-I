#include <stdio.h>

//funzione insertionSort
void insertionSort(int a[], int length){
	int tmp = 0;
	int exit = 0;
	
	//sort
	for(int i = 1; i < length; i++){
		
		for(int j = i; j > 0 ; j--){
			
			if(a[j] < a[j-1]){
				
				tmp = a[j - 1];
				a[j-1] = a[j];
				a[j] = tmp;
				
			}
		}
	}
}


int main(void){
	//dichiarazione variabili
	int size = 5;
	int array[] = {10, 3, 2, 6, 8};
	
	//call sort
	insertionSort(array, size);
	
	//comunico risultati
	for(int i = 0; i < size; i++){
		printf("%d ", array[i]);
	}
}
