#include <stdio.h>

int main (){

    /*
    44. Receba a altura do degrau de uma escada e a altura que o usuario deseja alcanc¸ar
    subindo a escada. Calcule e mostre quantos degraus o usuario devera subir para atingir
    seu objetivo.
    */

    float alt_degrau, alt_desejada;

    printf ("Digite a altura do degrau de uma escada: ");
    scanf ("%f", &alt_degrau);

    printf ("Digite a altura que deseja alcancar: ");
    scanf ("%f", &alt_desejada);

    printf ("Sera necessario subir %.1f degraus.\n", alt_desejada / alt_degrau);

    return 0;
}