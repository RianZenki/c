#include <stdio.h>
#include <stdlib.h>

// Comando while

int main () {

    /*
    Comando while:
    Permite executar, repetidamento, um conjunto 
    de comandos de acorco com uma condição.
    
    - Forma geral:
    while(condição){
        conjunto de comandos
    }

    */               

    int a, b;

    printf ("\nDigite dois valores inteiros: ");
    scanf ("%d %d", &a, &b);

    while(a < b){
        a++;
        printf ("%d\n", a);
    }

    printf ("\nDigite dois valores inteiros: ");
    scanf ("%d %d", &a, &b);


    // Exemplo com condição complexa

    while(a < b && a > 0){
        a++;
        printf ("%d\n", a);
    }

    printf ("Fim do programa\n");

    system("pause");

    return 0;
}