#include <stdio.h>

int main (){

    /*
    30. Leia um valor em real e a cotacao do dolar. Em seguida, 
    imprima o valor correspondente em dolares.
    */

    float real, cotacao;

    printf ("Digite o valor em real(R$): ");
    scanf ("%f", &real);

    printf ("Digite a cotacao do dolar: ");
    scanf ("%f", &cotacao);

    printf ("R$%.2f atualmente equivale: $%.2f.\n", real, real / cotacao);

    return 0;
}