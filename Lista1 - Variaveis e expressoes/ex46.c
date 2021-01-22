#include <stdio.h>

int main (){

    /*
    46. Faca um programa que leia um numero inteiro positivo de tres dıgitos (de 100 a 999).
    Gere outro numero formado pelos dıgitos invertidos do numero lido. Exemplo:
        NumeroLido = 123
        NumeroGerado = 321.
    */

    char letra;

    printf ("Digite uma letra maiuscula: ");
    scanf ("%c", &letra);

    printf ("Letra digitada: %c \nLetra em minuscula: %c", letra, letra + 32);

    return 0;
}