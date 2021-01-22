#include <stdio.h>

int main (){

    /*
    31. Leia um numero inteiro e imprima o seu antecessor e o seu sucessor.
    */

    int n;

    printf ("Digite um numero inteiro: ");
    scanf ("%d", &n);

    printf ("Numero digitado: %d \nAntecessor: %d \nSucessor: %d", n, n - 1, n + 1);

    return 0;
}