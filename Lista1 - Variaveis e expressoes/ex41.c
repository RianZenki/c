#include <stdio.h>

int main (){

    /*
    41. Faca um programa que leia o valor da hora de trabalho (em reais) e numero de horas
    trabalhadas no mes. Imprima o valor a ser pago ao funcionario, adicionando 10% sobre
    o valor calculado.
    */

    int horas;
    float valor_hora;

    printf ("Digite o valor da hora de trabalho: ");
    scanf ("%f", &valor_hora);

    printf ("Digite a quantidade de dias trabalhadas: ");
    scanf ("%d", &horas);

    printf ("Valor a ser pago: R$%.2f\n", horas * valor_hora + horas * valor_hora * 0.1);
    
    return 0;
}