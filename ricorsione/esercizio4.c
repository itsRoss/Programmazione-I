#include <stdio.h>
#include <stdbool.h>

#define N 4

//dichiarazione funzione simmetrica
/**
*   Matrice simmetrica
*
*   [1][2][2][1]
*   [3][4][3][4]
*   [5][6][6][5]
*   [7][8][8][7]
*
*/
bool is_simmetic(int matrix[N][N], int row, int column, bool result);

//main
int main(void){

    //dichiarazione variabili
    int matrix[N][N] = {{1,2,2,1}, {3,4,4,3}, {5,6,6,5}, {7,8,8,7}};
    int row = 0;
    int column = 0;
    int result = false;

    result = is_simmetic(matrix, row, column, result);

    //stampa
    if(result)
        printf("simmetrica\n");
    else
        printf("non simmetrica\n");


    return 0;
}

//definizione funzione
bool is_simmetic(int matrix[N][N], int row, int column, bool result){

    if(row != N && column != N)
        //controllo la simmetria
        if(matrix[row][column] == matrix[row][column + 3] && matrix[row][column + 1] == matrix[row][column + 2]){
            result = true;
            //continuo a controllare la simmetria
            result = is_simmetic(matrix, row + 1, column, result);
        }
        else{
            result = false;
        }

    return result;
}
