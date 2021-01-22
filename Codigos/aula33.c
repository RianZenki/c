#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Invertendo uma string

int main(){

    // Invertendo uma string

    // Apenas imprimindo na tela a string invertida
    char str[20] = "Linguagem C";
    int i;

    for(i=strlen(str) - 1; i>=0; i--){
        printf("%c", str[i]);
    }
    printf("\n");

    // Invertente e guardando a string em outra variavel
    char str2[20] = "Linguagem C";
    char str3[20];
    int j, k = 0;

    for(j=strlen(str2) - 1; j>=0; j--){
        str3[k] = str2[j];
        k++;
    } 
    str3[k] = '\0';

    printf("string2 = %s\n", str3);

    // Invertendo a propria variavel
    char str4[20] = "Linguagem C";
    char aux;
    int x, tam = strlen(str4);

    for(x=0; x<tam/2; x++){
        aux = str4[x];
        str4[x] = str4[tam - 1 - x];
        str4[tam - 1 - x] = aux;
    }
    
    printf("String = %s\n", str4);

    system("pause");
    return 0;
}