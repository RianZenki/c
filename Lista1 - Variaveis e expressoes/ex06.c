#include <stdio.h>

int main (){

    /*
    6. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.
    A formula de conversao e: F = C∗(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit
    e C a temperatura em Celsius.
    */

    float C;

    printf ("Digite a temperatura em Celsius: ");
    scanf ("%f", &C);

    printf ("%.2fC eh igual a: %.2fF\n", C, C * (9.0/5.0)+32.0);

    return 0;
}