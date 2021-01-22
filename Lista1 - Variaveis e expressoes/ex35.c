#include <stdio.h>
#include <math.h>

int main (){

    /*
    35. Sejam a e b os catetos de um triangulo, onde a hipotenusa e obtida pela equacao:
    hipotenusa = √a² + b². Faca um programa que receba os valores de a e b e calcule
    o valor da hipotenusa atraves da equacao. Imprima o resultado dessa operacao.     
    */

    float a, b;

    printf ("Digite o valor dos catetos: ");
    scanf ("%f %f", &a, &b);

    printf ("Valor da hipotenusa: %.2f\n", sqrt(a*a + b*b));

    return 0;
}