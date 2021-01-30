#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    /*
    13. Ler uma frase e contar quantos caracteres sao espacos em brancos. Lembre-se que uma frase e um conjunto de caracteres (vetor).
    */

    char frase[30];
    int i, espaco = 0;

    printf("Digite uma frase: ");
    fgets(frase, 30, stdin);
    frase[strlen(frase) - 1] = '\0';

    for (i=0; frase[i]!='\0'; i++){
        if (frase[i] == ' ') {
            espaco++;
        }
    }

    printf("\nFrase: %s\n", frase);
    printf("Quantidade de espacos: %d\n", espaco);

    system("pause");
    return 0;
}