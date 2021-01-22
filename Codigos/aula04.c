#include <stdio.h>
#include <stdlib.h>

// Função scanf

int main () {

    //scanf ("Tipo de entrada", variaveis);

    char letra;
    int nro;
    float f;
    double d;

    // scanf ("%c", &letra);
    // scanf ("%d", &nro);
    // scanf ("%f", &f);
    // scanf ("%f", &d);

    printf ("Digite um numero: ");
    scanf ("%d", &nro);

    printf ("Numero digitado: %d\n", nro);

    printf ("\nDigite dois numeros: ");
    scanf ("%d%f", &nro, &f);

    printf ("Numeros: %d e %f \n", nro, f);

    system("pause");

    return 0;
}