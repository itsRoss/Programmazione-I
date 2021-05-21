#include <stdio.h>

//dichiarazione funzione somma
int sumBetween(int n1, int n2, int result);

//main
int main(void){

    //dichiarazione variabili
    int n1 = 1;
    int n2 = 10;
    int result = 0;

    result = sumBetween(n1, n2, result);

    printf("La somma vale: %i\n", result);

    return 0;
}

//definizione funzione
int sumBetween(int n1, int n2, int result){

    //escludo il primo elemento
    n1 = n1 + 1;

    //escludo l'ultimo
    if(n1 != n2){
        result = n1 + sumBetween(n1, n2, result);
    }
    return result;

}
