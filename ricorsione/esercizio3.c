#include <stdio.h>

#define N 6

//dichiarazione funzione somma
double minDiff(double vet[], double min, double differenza, int index);

//main
int main(void){

    //dichiarazione variabili
    double vet[N] = {1.24, 2.54, 2.55, 4.67, 5.87, 8.23};
    double min = 99999;
    double differenza = 0;
    int index = 1;

    min = minDiff(vet, min, differenza, index);

    printf("La differenza minima vale: %.2f\n", min);

    return 0;
}

//definizione funzione
double minDiff(double vet[], double min, double differenza, int index){

    //faccio la differenza
    if(index != (N - 1)){
        differenza = vet[index + 1] - vet[index];

        //trovo il minimo
        if(differenza < min){
            min = differenza;
        }
        //continuo a cercare un minimo
        min = minDiff(vet, min, differenza, index + 1);
    }

    return min;
}
