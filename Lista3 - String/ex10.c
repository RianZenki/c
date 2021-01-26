#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    /*
    10. Faca um programa que receba uma palavra e a imprima de tras-para-frente.
    */

    char frase[30], aux;
    int i, tam;

    printf("Digite uma frase: ");
    fgets(frase, 30, stdin);
    frase[strlen(frase) - 1] = '\0';

    tam = strlen(frase);

    for(i=0; i<tam/2; i++) {
        aux = frase[i];
        frase[i] = frase[tam - 1 - i];
        frase[tam - 1 - i] = aux;
    }

    printf("Frase ao contrario: %s\n", frase);

    system("pause");
    return 0;
}