#include <stdio.h>

int main (){

    // 3. Peca ao usuario para digitar tres valores inteiros e imprima a soma deles. 

    int n1, n2, n3;

    printf ("Digite 3 numeros inteiros: ");
    scanf ("%d %d %d", &n1, &n2, &n3);

    printf ("A soma dos 3 numeros eh igual a : %d\n", n1 + n2 + n3);

    return 0;
}