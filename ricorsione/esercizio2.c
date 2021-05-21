#include <stdio.h>

//dichiarazione funzione somma
int occorrenze(char word[], char c, int num, int index);

//main
int main(void){

    //dichiarazione variabili
    char word[] = "elefante";
    char c = 'e';
    int numOccorrenze = 0;
    int index = 0;

    numOccorrenze = occorrenze(word, c, numOccorrenze, index);

    printf("Ci sono %i occorrenze di %c in %s", numOccorrenze, c, word);


    return 0;
}

//definizione funzione
int occorrenze(char word[], char c, int num, int index){

    //guardo di non essere arrivato alla fine della stringa
    if(word[index] != '\0'){
        //incremento le occorrenze
        if(word[index] == c){
            num = num + 1;
        }
        //continuo a controllare la stringa
        num = occorrenze(word, c, num, index + 1);
    }
    return num;

}
