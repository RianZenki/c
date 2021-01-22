#include <stdio.h>

int main (){

    /*
    12. Leia uma distancia em milhas e apresente-a convertida em quilometros. A formula de
    conversaoe: K = 1,61 ∗ M, sendo K a distancia em quilometros e M em milhas.
    */

    float M;

    printf ("Digite uma distancia em milhas: ");
    scanf ("%f", &M);

    printf ("%.2f milhas eh igual a: %.2f quilometros.\n", M, 1.61 * M);

    return 0;
}