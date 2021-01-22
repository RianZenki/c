#include <stdio.h>

#define VALOR 780000.00

int main (){

    /*
    39. A importancia de R$ 780.000,00 sera dividida entre tres ganhadores de um concurso.
    Sendo que da quantia total:
        • O primeiro ganhador recebera 46%;
        • O segundo recebera 32%;
        • O terceiro recebera o restante;
    Calcule e imprima a quantia ganha por cada um dos ganhadores.
    */

    printf ("O primeiro ganhador recebera: R$%.2f\n", VALOR * 0.46);
    printf ("O segundo ganhador recebera: R$%.2f\n", VALOR * 0.32);
    printf ("O terceiro ganhador recebera: R$%.2f\n", VALOR * 0.22);

    return 0;
}