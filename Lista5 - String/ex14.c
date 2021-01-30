#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    /*
    14. Faca um programa que leia uma palavra (maximo de 50 letras) e some 1 no valor ASCII de cada caractere da palavra. Imprima a string resultante.
    */

    char frase[50];
    int i;

    printf("Digite uma frase: ");
    fgets(frase, 50, stdin);
    frase[strlen(frase) - 1] = '\0';

    for (i=0; frase[i]!='\0'; i++){
        frase[i] += 1;
    }

    printf("\nFrase: %s\n", frase);

    system("pause");
    return 0;
}