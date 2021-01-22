#include <stdio.h>

int main (){

    /*
    16. Leia um valor de comprimento em polegadas e apresente-o convertido em centımetros.
    A formula de conversao e: C = P ∗ 2,54, sendo C o comprimento em centımetros e P o
    comprimento em polegadas.
    */

    float P;

    printf ("Digite um comprimento em polegadas: ");
    scanf ("%f", &P);

    printf ("%.2f polegadas eh igual a: %.2f centimentros.\n", P, P * 2.54);

    return 0;
}