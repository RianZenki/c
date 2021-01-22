#include <stdio.h>

int main (){

    /*
    38. Leia o salario de um funcionario. Calcule e imprima o valor do novo salario, sabendo que
    ele recebeu um aumento de 25%.
    */

    float salario, salario_final;

    printf ("Digite o salario do funcionario: ");
    scanf ("%f", &salario);

    salario_final = salario + salario * 0.25;

    printf ("Salario do funcionario: %.2f \nSalario do funcionario reajustado: %.2f\n", salario, salario_final);

    return 0;
}