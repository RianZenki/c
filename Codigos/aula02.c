#include <stdio.h>
#include <stdlib.h>

// declaração de variaveis

int main () {

    char letra = 'a';
    char nro = 10; // char pode receber numeros pequenos de -127 até 128
                   // por causa da tabela ASCII

    int i = 10;
    float n = 5.25;
    double d = 5.0e3; // formato notação cientifica - 5x10³

    int nro1 = 10;
    int nro2;
    int nro3;
    int nro1 = 10, nro2, nro3;

    // exercicios

    /* 1- Declare as seguintes variáveis em um programa
    letra = C numero1 = 13  numero2 = 3.56  pi=3,1415  mol = 6×10²³ 
    */

    char letra = 'C';
    int numero1 = 13;
    float numero2 = 3.56;
    float pi = 3.1415;
    double mol = 6e23;

    /* 2- Diga se as seguintes variáveis são válidas:

    a) linguagem - VALIDA

    b)_progRAMA - VALIDA

    c)ufu1234 - VALIDA

    d)int - INVALIDA

    e)float4 - VALIDA

    f)2012 - INVALIDA
    */

    system("pause");

    return 0;
}