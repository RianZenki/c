#include <stdio.h>

int main (){

    // 5. Leia um numero real e imprima a quinta parte deste numero.

    float n;

    printf ("Digite um numero real: ");
    scanf ("%f", &n);

    printf ("A quinta parte de %f eh igual a: %f\n", n, n / 5);

    return 0;
}