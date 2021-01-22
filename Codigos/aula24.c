#include <stdio.h>
#include <stdlib.h>

// comando goto

int main(){

    /*
    Comando goto:
    Faz um salto condicional de um ponto A para um ponto B.
    
    Não costuma ser utilizado na progração estruturada,
    sendo realmente util em poucas situações.

    Forma geral:
    destino:
    goto destino;
    */

    int i = 0;
    inicio:
    if(i < 5){
        printf("Numero: %d\n", i);
        i++;
        goto inicio;
    }

    //Facilmente substituivel por um comando for
    for(i = 0; i < 5; i++){
        printf("Numero: %d\n", i);
    }

    //Aplicação do goto - sair de diversos laços
    int j, k;

    for(i=0; i<5; i++)
        for(j=0; j<5; j++)
            for(k=0; k<5; k++)
                if(i==2 && j==3 && k==1)
                    goto fim;
                else
                    printf("Pos[%d, %d, %d]\n", i, j, k);
    
    fim:
    printf("Fim do programa\n");

    system("pause");

    return 0;
}