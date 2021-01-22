#include <stdio.h>

int main (){

    /*
    11. Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h
    (quilometros por hora). A f ˆ ormula de convers ´ ao˜ e: ´ K = M ∗ 3.6, sendo K a velocidade
    em km/h e M em m/s.
    */

    float M;

    printf ("Digite uma velocidade em km/h: ");
    scanf ("%f", &M);

    printf ("%.2fm/s eh igual a: %.2fkm/h.\n", M, M * 3.6);

    return 0;
}