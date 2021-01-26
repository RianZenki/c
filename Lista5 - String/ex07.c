#include <stdio.h>
#include <stdlib.h>

int main() {

    /*
    7. Crie um programa que compara duas strings (nao use a funcao strcmp).
    */

    char s[30], s2[30];
    int i;

    printf("Digite a primeira string: ");
    gets(s);

    printf("Digite outra string: ");
    gets(s2);

    for(i=0; s[i]!='\0'; i++) {
        if(s[i] != s2[i]){
            printf("Strings sao diferentes!\n");
            system("pause");
            return 0;
        }
    }

    printf("Sao iguais!\n");

    system("pause");
    return 0;
}