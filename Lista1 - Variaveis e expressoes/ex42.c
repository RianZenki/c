#include <stdio.h>

int main (){

    /*
    42. Receba o salario-base de um funcionario. Calcule e imprima o salario a receber, 
    sabendo-se que esse funcionario tem uma gratificacao de 5% sobre o salario-base. Alem disso,
    ele paga 7% de imposto sobre o salario-base. 
    */

    float salario_base, salario_final;

    printf ("Digite o salario base do funcionario: ");
    scanf ("%f", &salario_base);

    salario_final = salario_base + salario_base * 0.05 - salario_base * 0.07; 

    printf ("Valor final a ser pago: R$%.2f\n", salario_final);
    
    return 0;
}