#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    float s, e;

    printf("Digite o salario: ");
    scanf("%f", &s);

    printf("Digite o valor da prestacao de um emprestimo: ");
    scanf("%f", &e);

    if (e > (s * 0.20)) {
        printf("Emprestimo nao concedido\n");
    }
    else {
        printf("Emprestimo concedido\n");
    }

    system("pause");

    return 0;
}