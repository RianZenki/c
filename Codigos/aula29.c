#include <stdio.h>
#include <stdlib.h>

// Somando um array

int main(){

    // Somando um vetor
    int vet[5] = {1, 2, 3, 4, 5};
    int soma = 0, i;

    for(i=0; i<5; i++){
        soma += vet[i];
    }

    printf("Soma = %d\n", soma);

    // Somando uma matriz
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int j, k, soma2 = 0;

    for(j=0; j<3; j++){
        for(k=0; k<3; k++){
            soma2 += mat[j][k];
        }
    }

    printf("Soma = %d\n", soma);

    system("pause");
    return 0;
}