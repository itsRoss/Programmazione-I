#include <stdio.h>

//costanti per la matrice
#define N 30
#define MAX 128

//dichiarazione funzioni

//riempie un array di stringhe con i numeri da 1 a N
void fillArray(char arr[N][MAX]);

//sostituisce con CIP e CIOP
void cipCiop(char arr[N][MAX]);

//controlla se una stringa è formata solo da numerali, dà un messaggio di errore altrimenti
int numerico(char arr[N]);

//recupera una stringa e la converte da char a intero
int getNumber(char arr[N]);

//calcola le cife di un numero
int calcolaCifre(int n);

//stampa l'array di stringhe
void printArr(char array_stringhe[N][MAX]);


//main
int main(void){

    //dichiarazione variabili
    char arr[N][MAX];

    //chiamate funzioni
    fillArray(arr);
    cipCiop(arr);
    printArr(arr);

    return 0;
}

//Definizione funzione fillArray
void fillArray(char arr[N][MAX]){

    //variabile usata per il numero corrente
    int n1 = 0;
    int resto = 0;

    //rappresenta la lunghezza( numero di cifre del numero corrente
    int numCifre = 0;

    //Converto i numeri in stringa
    for(int i = 0; i < N; i++) {
        //numero corrente
        n1 = i + 1;
        //calcolo le cifre del numero corrente
        numCifre = calcolaCifre(n1);

        //costruisco la stringa inserendo le cifre al contrario
        for(int j = numCifre - 1; j >= 0; j--){
            resto = n1 % 10;

            //converto in char
            arr[i][j] = resto + '0';

            n1 /= 10;
        }
        //aggiungo il terminatore
        arr[i][numCifre] = '\0';
    }
}

//funzione per calcolare le cifre di un numero
int calcolaCifre(int n){

    int numCifre = 0;
    // Prima calcolo da quante cifre è composto n.
    int tmp = n;
    while (tmp != 0) {
        numCifre++;
        tmp /= 10;
    }
    return numCifre;
}

//funzione che stamp l'array di stirnghe
void printArr(char arr[N][MAX]) {
    int i = 0;
    for (i = 0; i < N - 1; i++) {
        printf("%s, ", arr[i]);
    }
    printf("%s\n", arr[i]);
}

//funzione per controllare se una stringa è formata solo da numeri
int numerico(char arr[N]){

    int i = 0;

    //Scorro la stringa
    while (arr[i] != '\0') {

        //Se trovo un carattere che non è un numero termino
        if (arr[i] < '0' || arr[i] > '9') {
            return 0;
        }

        i++;
    }

    return 1;
}

//sostiuisco con cip e ciop
void cipCiop(char arr[N][MAX]){

    //variabile usata per recuperare il numero
    int n;

    //scorro la matrice
    for (int i = 0; i < N; i++){

        //controllo che sia formata solo da numeri
        if (numerico(arr[i]) == 0){
            printf("Controllo fallito\n");
        }

        //recupero il numero
        n = getNumber(arr[i]);

        //Sostituzione
        if (n % 3 == 0 && n % 7 == 0){
            arr[i][0] = 'C';
            arr[i][1] = 'I';
            arr[i][2] = 'P';
            arr[i][3] = 'C';
            arr[i][4] = 'I';
            arr[i][5] = 'O';
            arr[i][6] = 'P';
            arr[i][7] = '\0';
        }
        else if (n % 3 == 0){
            arr[i][0] = 'C';
            arr[i][1] = 'I';
            arr[i][2] = 'P';
            arr[i][3] = '\0';
        }
        else if (n % 7 == 0){
            arr[i][0] = 'C';
            arr[i][1] = 'I';
            arr[i][2] = 'O';
            arr[i][3] = 'P';
            arr[i][4] = '\0';
        }
    }
}

//recupero il numero
int getNumber(char arr[N]){
    int n = 0;
    int i = 0;

    //scorro la stringa
    while (arr[i] != '\0') {

        //aggiungo uno zero per la somma delle cifre successive
        n *= 10;

        //aggiungo la cifra
        n += arr[i] - '0';

        i++;
    }

    return n;
}


