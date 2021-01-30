#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    /*
    12. Faca um programa que receba uma palavra e calcule quantas vogais (a, e, i, o, u) possui essa palavra. Entre com um caractere (vogal ou consoante) e substitua todas as vogais da palavra dada por esse caractere.
    */

    char frase[30], letra;
    int i, vogais = 0;

    printf("Digite uma frase: ");
    fgets(frase, 30, stdin);
    frase[strlen(frase) - 1] = '\0';

    for (i=0; frase[i]!='\0'; i++){
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' || frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U') {
            vogais++;
        }
    }

    printf("Digite uma letra: ");
    scanf("%c", &letra);

    for (i=0; frase[i]!='\0'; i++) {
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' || frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U') {
            frase[i] = letra;
        }
    }

    printf("\nQuantidade de vogais: %d\n", vogais);
    printf("letra digitada: %c\n", letra);
    printf("Frase: %s\n", frase);

    system("pause");
    return 0;
}