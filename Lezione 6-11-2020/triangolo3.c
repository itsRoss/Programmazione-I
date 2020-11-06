#include <stdio.h>

int main(void){
	//altezza del triangolo
	int h;
	int a = 1;
	
	printf("Inserire altezza del triangolo: ");
	scanf("%i", &h);
	
	for(; h>0; h--,a+= 2){
		
		for(int i=1; i<h; i++){
			printf(" ");
		};
		for(int j=1; j<=a; j++){
			printf("*");
		};
		printf("\n");	
	};

	
	return 0;
}
