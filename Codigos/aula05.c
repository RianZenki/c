#include <stdio.h>
#include <stdlib.h>

// Operador de atribuição

int main () {

    // varialvel = expressao;

    int x = 5, y, z;

    y = x;
    y = x + 10;

    // comandos errados
    // 5 = y;
    // x + 10 = y;

    // atribuicoes multiplas
    x = y = z = 10;

    x = 97;
    char ch1, ch2 = 'A';

    // atribuições de valores em variaveis de tipos diferentes

    // 97 = 'a' na tabela ASCII
    ch1 = x;
    printf ("ch1 = %c \n", ch1); // imprime 'a', valor equivalente na tabela ASCII

    // 'A' = 65 na tabela ASCII
    x = ch2; 
    printf ("x = %d \n", x); // imprime 65, valor equivalente na tabela ASCII

    y = 833;
    float f1, f2 = 5.25;

    f1 = x;
    printf ("\nf1 = %f \n", f1);

    x = f2;
    printf ("x = %d \n", x);

    float f = 97.3;

    ch1 = f;
    printf ("\nch1 = %c \n", ch1);

    f = ch2;
    printf ("f = %f \n", f);

    system("pause");

    return 0;
}