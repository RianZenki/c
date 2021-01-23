#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int n;

    printf("Digite numero inteiro:  ");
    scanf("%d", &n);

    if (n % 2 == 1) {
        printf("Numero digitado eh IMPAR\n");
    }
    else {
        printf("Numero digitado eh PAR\n");
    }

    system("pause");

    return 0;
}