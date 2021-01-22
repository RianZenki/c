#include <stdio.h>

int main (){

    /*
    48. Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.    
    */

    int tempo, d, h, m, s, segundos_rest;

    printf ("Digite um tempo em segundos: ");
    scanf ("%d", &tempo);


    d = tempo;
    segundos_rest = tempo  % 86400;
    h = segundos_rest;
    segundos_rest = segundos_rest % 3600;
    m = segundos_rest;
    segundos_rest = segundos_rest % 60;


    printf ("Tempo: %d horas: %d minutos: %d segundos: %d", tempo, h, m, segundos_rest);

    return 0;
}