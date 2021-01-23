#include <stdio.h>
#include <stdlib.h>

int main() {

    int n1, n2;

    printf("Digite dois numeros: ");
    scanf("%d %d", &n1, &n2);

    n1 > n2 ? printf("%d eh o maior \n", n1) 
            : printf("%d eh o maior \n", n2);    

    system("pause");

    return 0;
}