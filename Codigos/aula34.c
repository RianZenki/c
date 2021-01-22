#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Contando caracteres específicos

int main(){

    // Contando caracteres específicos

    // Varias condições no if
    char str[20] = "Linguagem C";
    int i, total = 0;

    for(i=0; i<strlen(str)-1; i++){
        if(str[i] == 'a' || str[i] == 'e'|| str[i] == 'i'|| str[i] == 'o'|| str[i] == 'u'){
            total++;
        }
    }

    printf("Numero de vogais minusculas = %d\n", total);

    // Utilizando 2 fors
    char str2[20] = "Linguagem C";
    char vogal[11] = "aeiouAEIOU"; // vogal[11] == '\0' 
    int j, k, t = 0;

    for(j=0; j<strlen(str2); j++){
        for(k=0; k<strlen(vogal); k++){
            if(str2[j] == vogal[k]){
                t++;
                break;
            }
        }
    }

    printf("Quantidade de vogais = %d\n", t);

    system("pause");
    return 0;
}