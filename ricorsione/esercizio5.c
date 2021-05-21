#include <stdio.h>
#include <string.h>

//dichiarazione funzione simmetrica
void printBackward(char word[], int len);

//main
int main(void){

    //dichiarazione variabili
    char word[] = "camacicci";

    //recupero l'ultimo char della stringa
    int len = strlen(word) - 1;

    printBackward(word, len);

    return 0;
}

//definizione funzione
void printBackward(char word[], int len){

    //finchè non arrivo all'inizio stampo
    if(len >= 0){
        printf("%c", word[len]);

        //richiamo la funzione spostadomi indietro di 1
        printBackward(word, len - 1);
    }


}
