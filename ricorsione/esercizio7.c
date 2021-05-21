#include <stdio.h>

//dichiarazione funzione per trovare il 10
int time(int n);

//main
int main(void){

    //dichiarazione variabili
    int n;

    //richiedo il numero
    printf("Inserire il numero n: ");
    scanf("%i", &n);

    printf("%i\n", time(n));

    return 0;
}

//definizione funzione
int time(int n){

    //T(0)=0
    if(n == 0)
        return 0;
    //T(1)=1
    else if(n == 1)
        return 1;
    //T(n)=2T(n-2)+5n
    else
        return 2*time(n - 2) + 5*n;

}
