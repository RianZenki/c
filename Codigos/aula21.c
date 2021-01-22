#include <stdio.h>
#include <stdlib.h>

// Aninhamento de repeticções

int main () {

    /*
    Aninhamento de repeticções:
    Trate- do uso de um comando de repetição
    (while, for ou do-while) dentro do outro

    Exemplo:
    repetição(condição1){
        conjunto de comandos;
        repetição(condição2){
            conjunto de comandos;
            repetição...
        }
    }

    */               

    int i, j;

    // Utilizando 2 for

    for(i = 1; i< 5; i++){
        for(j = 1;j < 5; j++){
            if(i == j){
                printf ("1 ");
            }
            else {
                printf ("0 ");
            }
        }
        printf ("\n");    
    }

    printf ("\n");

    // Utilizando 2 while

    i = 1;

    while(i < 5){
        j = 1;
        while(j < 5){
            if(i == j){
                printf ("1 ");
            }
            else {
                printf ("0 ");
            }
            j++;
        }
        printf ("\n");
        i++;
    }

    printf ("\n");
    
    // Utilizando while e for

    i = 1;
    while(i < 5){
        for (j = 1; j < 5; j++){
            if (i == j){
                printf ("1 ");
            }
            else {
                printf ("0 ");
            }
        }
        printf ("\n");
        i++;
    }

    printf ("\n");

    printf ("Fim do programa\n");

    system("pause");

    return 0;
}