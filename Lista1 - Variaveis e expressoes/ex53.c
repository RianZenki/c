#include <stdio.h>

int main (){

    /*
    53. Faca um programa para ler as dimensoes de um terreno (comprimento c e largura l),
    bem como o preco do metro de tela p. Imprima o custo para cercar este mesmo terreno
    com tela.
    */

    float l, c, p;

    printf ("Digite o comprimento do terreno: ");
    scanf ("%f", &c);

    printf ("Digite a largura do terreno: ");
    scanf ("%f", &l);

    printf ("Digite o preco por metro da tela: ");
    scanf ("%f", &p);

    printf ("O custo para cercar o terreno sera de: R$%.2f\n",  2 * (l + c) * p);

    return 0;
}