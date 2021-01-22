#include <stdio.h>
#include <stdlib.h>

// Operadores lógicos

int main () {

    /*
    - Operadores lógicos
    &&  Operador "E"
    ||  Operador "OU"

    - Resultado da comparação
    0: a operação é false
    1: a operação é verdadeira
    
    - Forma geral
    expressão "operador lógico" expressão    

    */

    // Operador E (&&): 
    // O resultado é 1 apenas se ambas as expressões tambem forem 1
    // do contrário, o resultado é 0

    int r, x = 5, y = 3;

    r = (x > 2) && (y < x);
    printf ("Resultado = %d\n", r);

    r = (x % 2 == 0) && (y > 0);
    printf ("Resultado = %d\n", r);


    // Operador OU (||): 
    // O resultado é 1 se uma das expressões for 1 
    // e 0 se ambas forem 0

    r = (x > 2) || (y > x);
    printf ("\nResultado = %d\n", r);

    r = (x % 2 == 0) || (y < 0);
    printf ("Resultado = %d\n", r);


    /*
    - Operadores lógicos
    !   Operador "NEGAÇÃO"

    - Resultado da comparação
    0: se a expressão valer 1
    1: se a expressão valer 0
    
    - Forma geral
    !(expressão)

    */

    // Operador Negaçãp (!): 
    // o resultado é 1 se a expressão for 0 
    // o resultado é 0 se a expressão for 1 

    r = !(x > 2);
    printf ("\nResultado = %d\n", r);

    r = !((x > 7) && (x > y));
    printf ("Resultado = %d\n", r);

    system("pause");

    return 0;
}