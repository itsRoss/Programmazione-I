#include <stdio.h>
#define DIM1 5
#define DIM2 4

//funzione che legge input e memorizza in un array
void leggi(int mat[DIM1][DIM2], int righe, int colonne){
	
	//leggo input e memorizzo in un array se numero positivo
	for (int i = 0; i < righe; i++){
		for(int j = 0; j < colonne; j++){
			//acquisizione input
			printf("Inserisci il numero: ");
			scanf("%d", &mat[i][j]);	
		}

	}
}

//funzione trasposta
void trasposta(int mat1[][DIM2], int mat2[][DIM1], int righe, int colonne){
	
	//leggo input e memorizzo in un array se numero positivo
	for (int i = 0; i < colonne; i++){
		for(int j = 0; j < righe; j++){
			//traspozizione
			mat2[i][j] = mat1[j][i];	
		}

	}
}

int main(void){
	
	//dichiarazione variabili
	int matrice[DIM1][DIM2];
	int matrice2[DIM2][DIM1];
	
	//chiamata funzione lettura
	leggi(matrice, DIM1, DIM2);
	
	//chiamata funzione trasposizione
	trasposta(matrice, matrice2, DIM1, DIM2);
	
	//comunicazione risultato
	printf("Matrice prima della trasposizione: \n");
	for (int i = 0; i < DIM1; i++){
		for(int j = 0; j < DIM2; j++){
			
			printf("[%d]", matrice[i][j]);
				
		}
		printf("\n");
	}
	
	//dopo trasposizione
	printf("Matrice dopo trasposizione: \n");
	for (int i = 0; i < DIM2; i++){
		for(int j = 0; j < DIM1; j++){
			
			printf("[%d]", matrice2[i][j]);
				
		}
		printf("\n");
	}
	
}
