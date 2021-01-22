#include <stdio.h>
#include <stdlib.h>

// declaracao de um define
// tipo - nome - valor
#define PI 3.1415

// Constantes

int main () {

    // Constantes sao variaveis que possuem seus conteudos imutaveis.
    // Quando declarodo uma constante, é OBRIGATORIO a atribuição de algum valor.

    // A diferença entre const e #define é a compilação do programa, com const é declarado uma variavel
    // já #define, ocorre a substituicao do nome pelo valor, ex: PI vira 3.1415

    const int nro = 10;
    int soma = nro + 1;

    printf ("Constante %d \n", nro);

    // não é possivel modificar o valor de uma constante
    // nro = 12;

    float f = PI + 1;
    printf ("PI = %f \n", PI);

    // Errado
    // PI = 12.4;

    system("pause");

    return 0;
}