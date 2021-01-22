#include <stdio.h>
#include <stdlib.h>

// Operador Ternário

int main () {

    /*
    Operador  Ternário (? :):
    É tipicamente utilizado para fazer atribuições condicionais

    - Forma geral:
    variavel = condição ? expressão1 : expressão2
                              V             F

    */               

    int x, y ,z;

    printf ("Digite x: ");
    scanf ("%d", &x);

    printf ("Digite y: ");
    scanf ("%d", &y);

    // Usando if else

    if (x > y)
        z = x;
    else 
        z = y;
    
    printf ("Maior: %d\n", z);

    // Usando ternário

    z = x > y ? x : y;

    printf ("Maior: %d\n", z);


    // Usando ternario sem atribuição à variavel

    (x > y) ? printf ("X eh o maior.\n")
            : printf ("Y eh o maior.\n");

    system("pause");

    return 0;
}