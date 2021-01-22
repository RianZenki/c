#include <stdio.h>
#include <stdlib.h>

// Operadores aritméticos

int main () {
    /*
    tipos de operação
    soma:           +
    subtração:      -
    multiplicação:  *
    divisão:        /
    resto:          %
    */

    // Soma

    int x1, x2 = 10, x3 = 12;
    char ch1, ch2 = '0', ch3 ='A';
    float f1, f2 = 5.25, f3 = 10.5;

    x1 = x2 + x3;
    ch1 = ch2 + ch3;
    f1 = f2 + f3;

    printf ("x1 = %d \n", x1);
    printf ("ch1 = %c (%d) \n", ch1, ch1);
    printf ("f1 = %f \n", f1);

    // Subtracao

    x1 = x3 - x2;
    f1 = -f2; // inverte o sinal do valor da variavel

    printf ("\nx1 = %d \n", x1);
    printf ("f1 = %f \n", f1);

    // Multiplicacao

    x1 = x3 * x2;
    f1 = 3 * f2;

    printf ("\nx1 = %d \n", x1);
    printf ("f1 = %f \n", f1);

    // Divisão

    x2 = 9;

    x1 = x2 / 2;
    printf ("\nx1 = %d \n", x1);

    f1 = x2 / 2;
    printf ("f1 = %f \n", f1); // imprime 4, pois int/int == int

    f2 = x2 / 2.0;
    printf ("f2 = %f \n", f2); // int/float ou float/int == float

    // Resto
    // Operador resto só funciona com numeros inteiros

    x1 = x2 % 2;
    printf ("\nx1 = %d \n", x1);

    x1 = x2 % 5;
    printf ("x1 = %d \n", x1);

    // Precedencias

    f2 = 5.25;

    f1 = f2 + 10 / 2.0;
    printf ("\nf1 = %f \n", f1);

    f1 = (f2 + 10) / 2.0;
    printf ("f1 = %f \n", f1);

    system("pause");

    return 0;
}