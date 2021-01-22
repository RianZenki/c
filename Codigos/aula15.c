#include <stdio.h>
#include <stdlib.h>

// Aninhamento If - Else

int main () {

    /*
    Aninhamento de if-else:
    Trata-se do uso de outro comando if, ou if else,
    dentro de um comando if, ou else

    - Exemplo:
    if (condição1){
        if (condição2){
            Primeiro conjunto de comandos
        }
        else {
            Segundo conjunto de comandos
        }
    }
    else {
        Terceiro conjunto de comandos
    }

    */

    int num;

    printf ("Digite um valor inteiro: ");
    scanf ("%d", &num);

    if (num == 0){
        printf ("O numero eh igual a 0.\n");
    }
    else {
        if (num > 0){
            printf ("O numero eh maior do que 0.\n");
        }
        else {
            printf ("O numero eh menor do que 0.\n");
        }
    }

    printf ("Fim do programa\n");

    system("pause");

    return 0;
}