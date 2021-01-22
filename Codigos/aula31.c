#include <stdio.h>
#include <stdlib.h>

// String

int main(){

    /*
    String: um array de caracteres

    Permite armazenar uma sequencia de caracteres
    adjacentes na memória (palavras ou frases)

    Forma geral:
    char nome_array[tamanho];

    Exemplo:
    char frase[20];
    */
    
    // Lendo e escrevendo uma string
    char palavra[20];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    //gets(palavra);
    printf("Palavra digitada: %s\n", palavra);

    /*
    scanf le a sequencia de caracteres até um espaço
    ou um enter.
    gets le até um enter, porem a alocação de dados 
    dele é meio merda.
    Usa o fgets q é melhor.
    */

    // Inicialização de string

    // Forma convencional
    char nome1[20] = {'J', 'o', 'a', 'o', '\0'};
    printf("\nNome: %s\n", nome1);

    // Forma especial
    char nome2[20] = "Maria";
    printf("Nome: %s\n", nome2);


    // Acessando o indice da string

    char palavra2[20] = "Teste";
    printf("\nPalavra = %s\n", palavra2);
    
    palavra2[0] = 'L';
    printf("Palavra = %s\n", palavra2);


    /*
    A função de '\0' é desconsiderar as posições
    restantes da string. É o finalizar da string.
    */

    char palavra3[20] = "Oitenta";
    printf("\nPalavra: %s\n", palavra3);

    palavra3[2] = '\0';
    printf("Palavra: %s\n", palavra3);

    system("pause");
    return 0;
}