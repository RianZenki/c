#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    float n;

    printf("Digite numero:  ");
    scanf("%f", &n);

    if (n < 0) {
        printf("%.2f ao quadrado: %.2f\n", n, pow(n, 2));
    }
    else {
        printf("Raiz quadrada de %.2f: %.2f\n", n, sqrt(n));
    }

    system("pause");

    return 0;
}