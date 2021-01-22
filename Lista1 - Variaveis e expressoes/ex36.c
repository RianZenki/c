#include <stdio.h>

#define PI 3.141592

int main (){

    /*
    36. Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume
    de um cilindro circular e calculado por meio da seguinte formula: V = π ∗ raio2 ∗ altura,
    onde π = 3.141592.
    */

    float h, r;

    printf ("Digite a altura do cilindo: ");
    scanf ("%f", &h);

    printf ("Ditie o raio do cilindro: ");
    scanf ("%f", &r);

    printf ("Volume do cilindro circular: %.2f\n", PI * r * r * h);

    return 0;
}