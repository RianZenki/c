#include <stdio.h>
#include <stdlib.h>

// Comando else

int main () {

    /*
    O comando else:
    permite executar um segundo conjunto de comandos
    se a condição do comando if for falsa

    - Forma geral
    if (condição){
        primeiro conjunto de comandos
    }
    else {
        segundo conjunto de comandos
    }

    */

    int x;

    printf ("Digite um valor inteiro: ");
    scanf ("%d", &x);

    if (x % 2 == 0){
        printf ("O valor eh PAR\n");
    }
    else {
        printf ("O valor eh IMPAR\n");
    }

    printf ("Fim do programa\n");

    system("pause");

    return 0;
}