#include <stdio.h>
#include <stdlib.h>

// Pré e Pós Incremento

int main () {

    int x = 10, y = 10;

    // x = x + 1
    x++;
    ++y;
    
    printf ("x = %d \n", x);
    printf ("y = %d \n", y);

    // x = x - 1
    x--;
    --y;
    
    printf ("\nx = %d \n", x);
    printf ("y = %d \n", y);

    // Pos incremento com outra atribuição
    y = x++;

    // y = x;  1°
    // x++;    2°

    printf ("\nx = %d \n", x);
    printf ("y = %d \n", y);

    // Pre incremento com outra atribuição
    y = ++x;

    // x++;    1°
    // y = x;  2°


    printf ("\nx = %d \n", x);
    printf ("y = %d \n", y);

    system("pause");

    return 0;
}