#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    /*
    17. Leia um vetor contendo letras de uma frase inclusive os espacos em branco. Retirar os espacos em branco do vetor e depois escrever o vetor resultante.
    */

    char frase[50], fraseNova[50];
    int i, espaco = 0;

    printf("Digite uma frase: ");
    fgets(frase, 50, stdin);
    frase[strlen(frase) - 1] = '\0';

    for (i=0; frase[i]!='\0'; i++){
        if (frase[i] == ' ') {
            espaco++;
            continue;
        }

        fraseNova[i - espaco] = frase[i];
    }

    fraseNova[i - espaco] = '\0';

    printf("\nFrase: %s\n", frase);
    printf("Frase sem espaco: %s\n", fraseNova);

    system("pause");
    return 0;
}