#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    /*
    11. Faca um programa que receba do usuario uma string. O programa imprime a string sem suas vogais.
    */

    char frase[30], vogais[11] = "aeiouAEIOU", novaFrase[30];


    printf("Digite uma frase: ");
    fgets(frase, 30, stdin);
    frase[strlen(frase) - 1] = '\0';
    // O fgets coloca um \n no final da string.
    // Substitui o \n para um '\0'

    printf("%s\n", frase);

    system("pause");
    return 0;
}