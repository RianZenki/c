#include <stdio.h>
#include <stdlib.h>

// Inicialização de Arrays

int main(){

    // Inicializando um array com zeros
    int vet[5], i;

    for(i=0; i<5; i++){
        vet[i] = 0;
    }

    // Inicializando um array com um valor em cada posição
    int v[5];
    v[0] = 15;
    v[1] = 12;
    v[2] = 9;
    v[3] = 1;
    v[4] = 35;

    /*
    Podemos definir uma lista de valores para colocar
    no array.

    Forma geral:
    tipo nome_array[tam1]...[tamN] = {valores};
    */

    // Exemplo
    int vetor[5] = {15, 12, 9, 1, 35};


    // Inicializando um vetor
    float vetor2[3] = {1.5, 22.1, 4.23};

    // Inicializando uma matriz
    int matriz1[2][3] = {1, 2, 3, 4, 5, 6};

    int matriz2[2][2] = {{1, 2, 3}, {4, 5, 6}};


    // Inicialização sem tamanho - Não recomendado

    // Declara um array com 10 posições
    int vetor3[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // O número de linhas da matriz será 5.
    int matriz[][2] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};


    system("pause");
    return 0;
}