#include <stdio.h>
#include <stdlib.h>

// Comando do-while

int main () {

    /*
    Comando do-while:
    Permite executar, repetidamente e AO MENOS UMA VEZ,
    um conjunto de comandos de acordo com uma condição.
    
    - Forma geral:
    do{
        conjunto de comandos
    }while(condição);

    */               

    int a, b;

    printf ("\nDigite dois valores inteiros: ");
    scanf ("%d %d", &a, &b);

    do{
        printf ("%d\n", a);
        a++;
    }while(a < b);


    // Exemplo com condição complexa

    printf ("\nDigite dois valores inteiros: ");
    scanf ("%d %d", &a, &b);

    do{
        printf ("%d\n", a);
        a++;
    }while(a < b && a > 0);


    // Exemplo Menu de opções

    int i;

    do{
        printf ("Escolha uma opcao: \n");
        printf ("(1) Opcao 1\n");
        printf ("(2) Opcao 2\n");
        printf ("(3) Opcao 3\n");
        scanf ("%d", &i);
    }while((i < 1) || (i > 3));

    printf ("Voce escolheu a opcao %d\n", i);

    printf ("Fim do programa\n");

    system("pause");

    return 0;
}