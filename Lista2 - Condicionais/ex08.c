#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    float n1, n2;

    printf("Digite duas notas: ");
    scanf("%f %f", &n1, &n2);
    
    if ((n1 < 0 || n1 > 10) || (n2 < 0 || n2 > 10)) {
        printf("Alguma nota digita eh invalida!\n");
    }
    else {
        printf("A media das notas eh: %.2f\n", (n1 + n2) / 2);
    }

    system("pause");

    return 0;
}