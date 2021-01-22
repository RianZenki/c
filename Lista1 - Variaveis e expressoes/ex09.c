#include <stdio.h>

int main (){

    /*
    9. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A
    formula de conversao e: K = C + 273.15, sendo C a temperatura em Celsius e K a
    temperatura em Kelvin.
    */

    float C;

    printf ("Digite a temperatura em Celsius: ");
    scanf ("%f", &C);

    printf ("%.2fC eh igual a: %.2fK\n", C, C + 273.15);

    return 0;
}