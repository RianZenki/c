#include <stdio.h>
#include <stdlib.h>

// Atribuição Simplificada

int main () {

    /*
    variavel = variavel "operação" expressão;
    variavel "operação=" expressao;
    */

    // Soma simplificada
    int x = 10, y = 10;
    int z = 2;

    x = x + z;
    printf ("x = %d \n", x);

    y += z; // y = y + z;
    printf ("y = %d \n", y);

    
    // Subtração simplificada
    x = x - z;
    printf ("\nx = %d \n", x);

    y -= z;
    printf ("y = %d \n", y);

    
    // Multiplicação simplificada
    x = x * z;
    printf ("\nx = %d \n", x);

    y *= z;
    printf ("y = %d \n", y);

    
    // Divisão simplificada
    x = x / z;
    printf ("\nx = %d \n", x);

    y /= z;
    printf ("y = %d \n", y);


    // Divisão simplificada
    x = x % z;
    printf ("\nx = %d \n", x);

    y %= z;
    printf ("y = %d \n", y);

    system("pause");

    return 0;
}