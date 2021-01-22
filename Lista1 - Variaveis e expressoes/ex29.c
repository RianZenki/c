#include <stdio.h>

int main (){

    /*
    29. Leia quatro notas, calcule a media aritmetica e imprima o resultado.
    */

    float n1, n2, n3, n4;

    printf ("Digite 4 notas: ");
    scanf ("%f %f %f %f", &n1 ,&n2, &n3, &n4);

    printf ("A media aritmetica eh igual a: %.2f.\n", (n1 + n2 + n3 + n4) / 4);

    return 0;
}