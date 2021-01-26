#include <stdio.h>
#include <stdlib.h>

int main() {

    // 1. Faca um programa que entao leia uma string e a imprima.

    char s[30];

    printf("Digite uma frase: ");
    gets(s);

    printf("Frase digitada: %s\n", s);

    system("pause");
    return 0;
}