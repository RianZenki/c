#include <stdio.h>
#include <stdlib.h>

int main() {

    /*
    3. Entre com um nome e imprima o nome somente se a primeira letra do nome for ‘a’ (maiuscula ou minuscula).
    */

    char s[30];

    printf("Digite um nome: ");
    gets(s);

    if(s[0] == 'a' || s[0] == 'A') {
        printf("Nome digitado: %s\n", s);
    }

    system("pause");
    return 0;
}