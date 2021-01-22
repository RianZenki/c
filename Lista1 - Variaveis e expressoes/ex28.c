#include <stdio.h>

int main (){

    /*
    28. Faca a leitura de tres valores e apresente como resultado a soma dos quadrados dos
    tres valores lidos.
    */

    float n1, n2, n3;

    printf ("Digite 3 numeros reais: ");
    scanf ("%f %f %f", &n1 ,&n2, &n3);

    printf ("A soma dos quadrados dos 3 valores eh igual a: %.2f.\n", n1 * n1 + n2 * n2 + n3 * n3);

    return 0;
}