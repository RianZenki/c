#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    /*
    24. Escreva um programa que recebe do usuario uma string S, um caractere C, e uma posicao I e devolve o ındice da primeira posicao da string onde foi encontrado o caractere C. A procura deve comecar a partir da posicao I.
    */

    char frase[50], c;
    int i, posicao, encontrado = -1;

    printf("Digite uma frase: ");
    fgets(frase, 50, stdin);
    frase[strlen(frase) - 1] = '\0';

    printf("Digite um caractere: ");
    scanf("%c", &c);

    printf("Digite uma posicao: ");
    scanf("%d", &posicao);

    for (i=posicao; frase[i]!='\0'; i++){
        if (frase[i] == c) {
            encontrado = i;
            break;
        }
    }

    printf("Caractere encontrado na posicao %d da string.", encontrado);
    
    printf("\n");

    system("pause");
    return 0;
}