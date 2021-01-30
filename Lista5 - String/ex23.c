#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    /*
    23. Escreva um programa que recebe uma string S e inteiros nao-negativos I e J e imprima o segmento S[I..J].
    */

    char frase[50];
    int i, j, k;

    printf("Digite uma frase: ");
    fgets(frase, 50, stdin);
    frase[strlen(frase) - 1] = '\0';

    printf("Digite indice do inicio da string: ");
    scanf("%d", &j);

    printf("Digite o indice do fim da string: ");
    scanf("%d", &k);

    printf("\nFrase: ");

    for (i=j; i<=k; i++){
        printf("%c", frase[i]);
    }
    
    printf("\n");

    system("pause");
    return 0;
}