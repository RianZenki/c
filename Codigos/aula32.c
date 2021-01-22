#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Biblioteca string.h

int main(){

    /*
    A linguagem C possui algumas funções para manipulação
    de strings.
    Biblioteca <string.h>

    Algumas funções da biblioteca:
    strlen - Tamanho da string
    strcpy - Copiar uma string
    strcat - Concatenar duas strings
    strcmp - Compara duas strings
    */

    // O tamanho de uma string
    char palavra[20] = "Linguagem C";
    int tamanho = strlen(palavra);

    printf("Tamanho = % d\n", tamanho);

    // Copiando uma string
    char frase[20] = "Aprendendo C";
    char novaFrase[30];
    strcpy(novaFrase, frase);

    printf("Copia = %s\n", novaFrase);

    // Concatenando duas strings
    char palavra1[30] = "Bom ";
    char palavra2[20] = "dia";
    strcat(palavra1, palavra2);

    // O conteudo da palavra 2, vai ser copiada e colocada
    // no final da palavra 1.

    printf("palavra = %s\n", palavra1);

    // Comparando duas strings
    char palavra3[20] = "Linguagem C";
    char palavra4[30] = "LINGUAGEM C";

    if(strcmp(palavra3, palavra4) == 0){
        printf("Strings iguais\n");
    }
    else {
        printf("Strings diferentes\n");
    }

    //printf("%d\n", strcmp(palavra3, palavra4));


    // Copiando o conteudo um vetor de char para outro vetor
    char str1[20] = "Hello World!!!!";
    char str2[20];

    // Forma errada
    //str2 = str1; 


    system("pause");
    return 0;
}