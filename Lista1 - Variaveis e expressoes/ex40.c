#include <stdio.h>

int main (){

    /*
    40. Uma empresa contrata um encanador a R$ 30,00 por dia. Faca um programa que solicite
    o numero de dias trabalhados pelo encanador e imprima a quantia lıquida que devera ser
    paga, sabendo-se que sao descontados 8% para imposto de renda.
    */

    int dias;
    float valor_liq;

    printf ("Digite a quantidade de dias trabalhadas: ");
    scanf ("%d", &dias);

    valor_liq = 30.00 * dias - 30.00 * dias * 0.08;

    printf ("Valor liquido a pagar: R$%.2f\n", valor_liq);

    
    return 0;
}