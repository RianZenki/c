#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    float n;

    printf("Digite numero:  ");
    scanf("%f", &n);

    if (n < 0) {
        printf("Numero invalido. Apenas numeros positivos.\n");
    }
    else {
        printf("Raiz quadrada de %.2f: %.2f\n", n, sqrt(n));
    }

    system("pause");

    return 0;
}