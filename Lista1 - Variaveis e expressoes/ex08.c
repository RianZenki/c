#include <stdio.h>

int main (){

    /*
    8. Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A
    formula de conversao e: C = K − 273.15, sendo C a temperatura em Celsius e K a
    temperatura em Kelvin.
    */

    float K;

    printf ("Digite a temperatura em Kelvin: ");
    scanf ("%f", &K);

    printf ("%.2fK eh igual a: %.2fC\n", K, K - 273.15);

    return 0;
}