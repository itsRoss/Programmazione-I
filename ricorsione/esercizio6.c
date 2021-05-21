#include <stdio.h>
#include <stdbool.h>

#define N 10

//dichiarazione funzione per trovare il 10
bool isTenInside(int arr[], int index, bool result);

//main
int main(void){

    //dichiarazione variabili
    int arr[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 12};
    int index = 0;
    bool result = false;

    //chiamo la funzione
    result = isTenInside(arr, index, result);

    //stampa risultato
    if(result)
        printf("Presente\n");
    else
        printf("Non presente\n");

    return 0;
}

//definizione funzione
bool isTenInside(int arr[N], int index, bool result){

    if(index != N)
        if(arr[index] != 10){
            result = false;
            //richiamo la funzione incrementando l'indice
            result = isTenInside(arr, index + 1, result);
        }
        else{
            result = true;
        }

    return result;
}
