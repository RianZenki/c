#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int n1, n2;

    printf("Digite dois numero inteiro:  ");
    scanf("%d %d", &n1, &n2);
    

    if (n1 > n2) {
        printf("%d eh o maior\n", n1);
    }
    else if (n2 > n1){
        printf("%d eh o maior\n", n2);
    }
    else {
        printf("Numeros iguais.\n");
    }

    system("pause");

    return 0;
}