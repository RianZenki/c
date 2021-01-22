#include <stdio.h>

#define PI 3.14

int main (){

    /*
    14. Leia um angulo em graus e apresente-o convertido em radianos. A formula de conversao
    e: R = G ∗ π/180, sendo G o angulo em graus e R em radianos e π = 3.14.
    */

    float G;

    printf ("Digite uma angulo em graus: ");
    scanf ("%f", &G);

    printf ("%.2f graus eh igual a: %.2f radianos.\n", G, G * PI / 180);

    return 0;
}