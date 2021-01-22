#include <stdio.h>

int main (){

    /*
    45. Faca um programa para converter uma letra maiuscula em letra minuscula. Use a tabela
    ASCII para resolver o problema.
    */

    char letra;

    printf ("Digite uma letra maiuscula: ");
    scanf ("%c", &letra);

    printf ("Letra digitada: %c \nLetra em minuscula: %c", letra, letra + 32);

    return 0;
}