#include <stdio.h>

int main (){

    /*
    50. Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de
    sua idade e do ano atual.
    */

    int idade, ano;

    printf ("Digite a sua idade: ");
    scanf ("%d", &idade);

    printf ("Digite o ano atual: ");
    scanf ("%d", &ano);

    printf ("O ano de nascimento eh: %d\n", ano - idade);

    return 0;
}