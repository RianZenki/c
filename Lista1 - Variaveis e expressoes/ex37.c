#include <stdio.h>

#define PI 3.141592

int main (){

    /*
    37. Faca um programa que leia o valor de um produto e imprima o valor com desconto, tendo
    em vista que o desconto foi de 12%.
    */

    float valor, val_desc;

    printf ("Digite o valor do produto: ");
    scanf ("%f", &valor);

    val_desc = valor - valor * 0.12;

    printf ("Valor do produto: %.2f \nValor do produto com desconto: %.2f\n", valor, val_desc);

    return 0;
}