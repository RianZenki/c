#include <stdio.h>
#include <stdlib.h>

// Operadores Relacionais

int main () {

    /*
    - Operadores relacionais
    >    "Maior do que"
    >=   "Maior ou igual"
    <    "Menor do que"
    <=   "Menor ou igual"
    ==   "Igual a"
    !=   "Diferente de"

    - Resultado da comparação
    0: a comparação é false
    1: a comparação é verdadeira

    - Forma geral
    valor "operador_relacional" valor2

    */

    int x = 5, y = 3;

    printf ("Resultado = %d \n", x > 4);
    printf ("Resultado = %d \n", x >= y + 2);
    printf ("Resultado = %d \n", x < y);
    printf ("Resultado = %d \n", x <= 6);
    printf ("Resultado = %d \n", x == 4);
    printf ("Resultado = %d \n", x - 2 != y);
    printf ("Resultado = %d \n", x = 4); // ERRADO

    system("pause");

    return 0;
}