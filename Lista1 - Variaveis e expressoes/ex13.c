#include <stdio.h>

int main (){

    /*
    13. Leia uma distancia em quilometros e apresente-a convertida em milhas. A formula de
    conversao e: M = K/1,61 , sendo K a distancia em quilometros e M em milhas.
    */

    float K;

    printf ("Digite uma distancia em quilometros: ");
    scanf ("%f", &K);

    printf ("%.2f quilometros eh igual a: %.2f milhas.\n", K, K / 1.61);

    return 0;
}