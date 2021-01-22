#include <stdio.h>
#include <stdlib.h>

// Comando if

int main () {

    /*
    O comando if:
    permite executar ou não um conjunto de comandos
    de acordo com uma condição

    - Forma geral
    if (condição){
        conjunto de comandos
    }

    */

    int x, y;

    printf ("Digite um valor inteiro: ");
    scanf ("%d", &x);

    if (x > 0){
        printf ("O valor eh positivo\n");
    }

    if ((x % 2 == 0) || (x < 0)){
        printf ("O valor eh par ou negativo\n");
    }

    if (x > 0){
        y = x % 3;
        printf ("O resto de %d/3 eh: %d\n", x, y);
    }

    printf ("Fim do programa\n");

    system("pause");

    return 0;
}