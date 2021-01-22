#include <stdio.h>
#include <stdlib.h>

// Comando for

int main () {

    /*
    Comando for:
    Permite executar, repetidamente, um conjunto
    de comandos de acordo com uma condição.
    
    - Forma geral:
    for(inicialização; condição; incrimento){
        conjunto de comandos
    }

    */               

    int a, b, c;

    printf ("\nDigite dois valores inteiros: ");
    scanf ("%d %d", &a, &b);

    for (c = a; c <= b; c++){
        printf ("%d\n", c);
    }

    
    // Exemplo com condição complexa

    printf ("\nDigite dois valores inteiros: ");
    scanf ("%d %d", &a, &b);

    for (c = a; c <= b && c > 0; c++){
        printf ("%d\n", c);
    }    

    
    // Utilizando mais de uma variavel

    int i, j;

    for(i = 0, j = 10; i < j; i++, j--){
        printf ("i = %d e j = %d\n", i, j);
    }

    printf ("Fim do programa\n");

    system("pause");

    return 0;
}