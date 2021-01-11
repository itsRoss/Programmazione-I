#include <stdio.h>

//funzione insertionSort
void bubbleSort(int a[], int length){
	int tmp = 0;
	int count = 0;
	
	while(count < 5){
		for(int i = 0; i < length; i++){
			if(a[i] > a[i + 1]){
				tmp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = tmp;
			}
		}
		count++;
	}
	
	
}


int main(void){
	//dichiarazione variabili
	int size = 5;
	int array[] = {10, 3, 2, 1, 4};
	
	//call sort
	bubbleSort(array, size);
	
	//comunico risultati
	for(int i = 0; i < size; i++){
		printf("%d ", array[i]);
	}
}
