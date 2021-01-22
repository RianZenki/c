#include <stdio.h>

int main (){

    /*
    47. Leia um numero inteiro de 4 dıgitos (de 1000 a 9999) e imprima 1 dıgito por linha.
    */

    int numero, c, d, u;

    printf ("Digite um numero inteiro positivo com 4 digitos: ");
    scanf ("%d", &numero);

    u = numero % 10;
    d = numero % 100 - u;
    c = numero % 1000 - d;

    printf ("%d\n", (numero - numero % 1000) / 1000);
    printf ("%d\n", c / 100);
    printf ("%d\n", d / 10);
    printf ("%d\n", u);

    return 0;
}