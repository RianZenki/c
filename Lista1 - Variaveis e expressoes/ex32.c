#include <stdio.h>

int main (){

    /*
    32. Leia um numero inteiro e imprima a soma do sucessor de seu triplo com o antecessor de ´
    seu dobro.
    */

    int n;

    printf ("Digite um numero inteiro: ");
    scanf ("%d", &n);

    printf ("Numero digitado: %d \nSucessor de seu tripo: %d \nAntecessor de seu dobro: %d\n", n, n * 3 + 1, n * 2 - 1);
    printf ("Soma: %d", n * 3 + 1 + (n * 2 - 1));

    return 0;
}