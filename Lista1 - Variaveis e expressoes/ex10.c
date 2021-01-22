#include <stdio.h>

int main (){

    /*
    10. Leia uma velocidade em km/h (quilometros por hora) e apresente-a convertida em m/s ˆ
    (metros por segundo). A formula de convers ´ ao˜ e: ´ M = K/3.6, sendo K a velocidade em
    km/h e M em m/s.
    */

    float K;

    printf ("Digite uma velocidade em km/h: ");
    scanf ("%f", &K);

    printf ("%.2fkm/h eh igual a: %.2fm/s.\n", K, K / 3.6);

    return 0;
}