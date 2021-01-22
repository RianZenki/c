#include <stdio.h>

int main (){

    /*
    33. Leia o tamanho do lado de um quadrado e imprima como resultado a sua area.
    */

    float l;

    printf ("Digite o tamanho do lado do quadrado: ");
    scanf ("%f", &l);

    printf ("Lado do quadrado: %.2f \nArea do quadrado: %.2f", l, l * l);

    return 0;
}