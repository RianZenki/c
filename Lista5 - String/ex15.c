#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    /*
    15. Escreva um programa para converter uma cadeia de caracteres de letras maiusculas em letras minusculas. Dica: some 32 dos caracteres cujo codigo ASCII esta entre 65 e 90.
    */

    char frase[50];
    int i;

    printf("Digite uma frase: ");
    fgets(frase, 50, stdin);
    frase[strlen(frase) - 1] = '\0';

    for (i=0; frase[i]!='\0'; i++){
        if (frase[i] == ' ') continue;
        frase[i] += 32;
    }

    printf("\nFrase: %s\n", frase);

    system("pause");
    return 0;
}