#include <stdio.h>

#define PI 3.141592

int main (){

    /*
    34. Leia o valor do raio de um circulo e calcule e imprima a area do cırculo correspondente.
    A area do cırculo e π ∗ raio2, considere π = 3.141592.
    */

    float r;

    printf ("Digite o valor do raio de um circulo: ");
    scanf ("%f", &r);

    printf ("raio do circulo: %.2f \nArea do circulo: %.2f\n", r, PI * (r * r));

    return 0;
}