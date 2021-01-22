#include <stdio.h>
#include <stdlib.h>

#define N 100

// Array/Matriz

int main(){

    /*
    Array de duas dimensões: Matriz

    Forma geral:
    tipo nome_matriz[nro_linhas][nro_colunas];  
    */

    //Exemplo:
    int mat[3][2];

    //Declarando um array

    int n = 5;
    float F[N+1][N]; //Correto
    char frases[30][50]; //Correto
    int mat[n][n]; //Errado
    //int m[4.5][5]; //Errado

    //Acesso aos elementos: indice

    int mat[3][2], M[3][2];
    mat[0][0] = 5; //Primeira posição
    mat[0][1] = 23;
    mat[2][1] = -1; //Ultima posição

    scanf("%d",&mat[2][0]); //Comando de leitura
    mat[0][0] = 10; //Coamndo de atribuição
    mat[1][1] = mat[0][0] + mat[2][0]; //Expressão
    //mat = M; //Errado

    //Exemplo de funcionalidade
    //Recebe pelo teclado o valor dos indices de toda a matriz

    int mat[10][5];
    int i, j;
    for(i=0; i<10; i++){
        for(j=0; j<5; j++){
            printf("Digite mat[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    system("pause");
    return 0;
}