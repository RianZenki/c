#include <stdio.h>

#define PI 3.14

int main (){

    /*
    15. Leia um angulo em radianos e apresente-o convertido em graus. A formula de conversao
    e: G = R ∗ 180/π, sendo G o angulo em graus e R em radianos e π = 3.14.
    */

    float R;

    printf ("Digite uma angulo em radianos: ");
    scanf ("%f", &R);

    printf ("%.2f radianos eh igual a: %.2f graus.\n", R, R * 180 / PI);

    return 0;
}