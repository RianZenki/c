#include <stdio.h>
#include <stdlib.h>

int main() {

    /*
    5. Digite um nome, calcule e retorne quantas letras tem esse nome.
    */

    char s[30];
    int letras = 0, i;

    printf("Digite um nome: ");
    gets(s);

    for(i=0; s[i]!='\0'; i++) {

        if(s[i] == ' ') {
            continue;
        }
        else{     
            letras++;
        }
    }

    printf("Quantidade de letras: %d\n", letras);

    system("pause");
    return 0;
}