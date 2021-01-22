#include <stdio.h>

int main (){

    // 4. Leia um numero real e imprima o resultado do quadrado desse numero.

    float n1;

    printf ("Digite um numero real: ");
    scanf ("%f", &n1);

    printf ("A quadrado de %f eh igual a: %f\n", n1, n1 * n1);

    return 0;
}