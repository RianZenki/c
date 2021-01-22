#include <stdio.h>
#include <stdlib.h>

// Maior elemento de um array

int main(){

    // Procurar o maior elemento de um array
    int vet[5] = {3, 19, 2, 52, 45};
    int i, maior = vet[0], menor = vet[0];

    for(i=1; i<5; i++){
        if(maior < vet[i])
            maior = vet[i];
        if(menor > vet[i])
            menor = vet[i];
    }

    printf("Maior numero = %d\nMenor numero = %d\n", maior, menor);


    system("pause");
    return 0;
}