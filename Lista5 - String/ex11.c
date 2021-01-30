#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    /*
    11. Faca um programa que receba do usuario uma string. O programa imprime a string sem suas vogais.
    */

    char frase[30], novaFrase[30];
    int i, vogais = 0;

    printf("Digite uma frase: ");
    fgets(frase, 30, stdin);
    frase[strlen(frase) - 1] = '\0';

    for (i=0; frase[i]!='\0'; i++){
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' || frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U') {
            vogais++;
            continue;
        }
        novaFrase[i-vogais] = frase[i];
    }

    novaFrase[i-vogais] = '\0';

    printf("Frase original: %s\n", frase);
    printf("Frase sem vogais: %s\n", novaFrase);

    system("pause");
    return 0;
}