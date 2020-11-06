#include <stdio.h>

int main(void){
	//altezza del triangolo
	int h;
	
	//acquisizione dati
	printf("Inserire altezza del triangolo: ");
	scanf("%i", &h);
	
	//prima metà triangolo
	for(int i=1; i<=h; i++){
		for(int j=1; j<=i; j++){
			printf("*");
		}
		printf("\n");
	};
	//seconda metà triangolo
	for(int i=h-1; i>=1; i--){
		for(int j=i; j>=1; j--){
			printf("*");
		}
		printf("\n");
	};
	
	
	return 0;
}
