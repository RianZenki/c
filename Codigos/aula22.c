#include <stdio.h>
#include <stdlib.h>

// Comando break

int main () {

    /*
    Comando break:
    Interromper a repetição de qualquer comando
    de laço (for, while ou do-while)

    Forma geral:
    repetição(condição1){
        if(condição2)
            break;
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
            break;
        }
        printf ("%d\n", a);
    }

    system("pause");

    return 0;
}