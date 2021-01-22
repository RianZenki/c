#include <stdio.h>
#include <stdlib.h>

// Array Multidimensional

int main(){

    /*
    Vetor = uma dimensão

    Exemplo:
    float notas[100];

    Matriz = duas dimensões

    Exemplo:
    int mat[100][50];
    
    Array Multidimensional = mais de duas dimensões

    Exemplo:
    double local[5][5][5]

    TOMAR CUIDADO!!
    ARRAY COM MAIS DE 3 DIMENSÕES CONSOME MUITO MEMORIA.
    */

    //Declaranda array de int com 1 dimensão
    int vet[5];

    //Declaranda array de flaot com 2 dimensão
    float mat[5][5];
    
    //Declaranda array de double com 3 dimensão
    double cub[5][5][5];

    cub[0][0][0] = 5; //Primeira posição
    cub[0][0][1] = 23;
    cub[4][4][4] = -1; //Ultima posição

    //Declaranda array de int com 4 dimensão
    int X[5][5][5][5];

    X[0][0][0][0] = 1; //Primeira posição
    X[0][0][0][1] = 4;
    X[4][4][4][4] = 67; //Ultima posição

    //Exemplo de funcionalidade:
    //Preenche o array de 3 dimensões com zeros

    int cubo[5][5][5]; // 125 posições/variaveis
    int i, j, k;
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            for(k=0; k<5; k++){
                cubo[i][j][k] = 0;
            }
        }
    }

    system("pause");
    return 0;
}