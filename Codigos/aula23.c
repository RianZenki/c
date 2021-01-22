#include <stdio.h>
#include <stdlib.h>

// Comando Continue

int main () {

    /*
    Comando Continue:
    Interromper a repetição de qualquer comando
    de laço (for, while ou do-while), e passa
    para a proxima repetição.

    Similar ao break, mas não sai do laço, ele
    volta para o começo do laço.

    Forma geral:
    repetição(condição1){
        if(condição2)
            continue;
    }

    */ 

    int a, b;

    printf ("Digiteo valor de a: ");
    scanf ("%d", &a);
    
    printf ("Digiteo valor de b: ");
    scanf ("%d", &b);

    while (a <= b){
        a++;
        if(a == 5){
            continue;
        }
        printf ("%d\n", a);
    }

    system("pause");

    return 0;
}