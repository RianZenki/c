#include <stdio.h>
#include <stdlib.h>

#define N 5

// Array/Vetor

int main(){

    /*
    Array ou vetor: Uma dimensão
    Conjunto de variáveis do mesmo tipo usando o mesmo.
    

    Forma geral:
    tipo nome_array[tamanho];  
    */

    //Para guardar 100 numeros
    float numeros[100];

    /*
    O tamanho de um array deve ser sempre um valor ou 
    expressão inteira e constante
    */

    int n = 5;
    float f[N+1]; //Correto
    char texto[30]; //Correto
    int vetor[n]; //Errado
    //int v[4.5]; //Errado

    //Acesso aos elementos: indice

    numeros[0] = 81; //Primeiro indice recebe o valor 81
    numeros[1] = 55; //Segundo indice
    numeros[99] = 72; //Ultimo indice

    //Cada posição do array é uma variavel

    float vetor[100];

    scanf("%d", &numeros[5]); //Comando de leitura
    numeros[0] = 10; //Comando de atribuição
    numeros[1] = numeros[5] + numeros[0]; //Expressão
    //numeros = vetor; //Errado

    //Exemplo de utilização do array

    /*
    Calcular a media da nota dos alunos e verificar quem
    possui a nota maior que a media.
    */

    float notas[N], media = 0.0;
    int i;

    for(i=0; i<N; i++){
        printf("Digite a nota do aluno %d: ",i);
        scanf("%f" ,&notas[i]);
        media += notas[i];
    }

    media /= N;

    for(i=0; i<N; i++){
        if(notas[i] > media){
            printf("Aluno %d: %.2f\n", i, notas[i]);
        }
    }

    system("pause");

    return 0;
}