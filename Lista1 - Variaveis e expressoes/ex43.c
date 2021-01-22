#include <stdio.h>

int main (){

    /*
    43. Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
        • o total a pagar com desconto de 10%;
        • o valor de cada parcela, no parcelamento de 3× sem juros;
        • a comissao do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto)
        • a comissao do vendedor, no caso da venda ser parcelada (5% sobre o valor total)
    */

    float valor_compra, valor_desconto;

    printf ("Digite total da compra: ");
    scanf ("%f", &valor_compra);

    valor_desconto = valor_compra - valor_compra * 0.1;

    printf ("Valor total a pagar com desconto de 10%%: R$%.2f\n", valor_desconto);
    
    printf ("Valor de cada parcela, no parcelamento de 3x: R$%.2f\n", valor_compra / 3);

    printf ("Comissao do vendedor, no caso da venda ser a vista: R$%.2f\n", valor_desconto * 0.05);

    printf ("Comissao do vendedor, no caso da venda ser parcelada: R$%.2f\n", valor_compra * 0.05);

    return 0;
}