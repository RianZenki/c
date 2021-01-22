#include <stdio.h>

int main (){

    /*
    7. Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius.
    A formula de conversao e: C = 5.0 ∗ (F − 32.0)/9.0, sendo C a temperatura em Celsius
    e F a temperatura em Fahrenheit.
    */

    float F;

    printf ("Digite a temperatura em Fahrenheit: ");
    scanf ("%f", &F);

    printf ("%.2fF eh igual a: %.2fC\n", F, 5.0 * (F - 32.0)/9.0);

    return 0;
}