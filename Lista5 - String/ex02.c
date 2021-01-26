#include <stdio.h>
#include <stdlib.h>

int main() {

    // 2. Crie um programa que calcula o comprimento de uma string (nao use a funcao strlen).

    char s[30];
    int i, count = 0;

    printf("Digite uma frase: ");
    gets(s);

    for(i=0; s[i]!='\0'; i++){
        count++;
    }

    printf("Tamanho da string: %d\n", count);

    system("pause");
    return 0;
}