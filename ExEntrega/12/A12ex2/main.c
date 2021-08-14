#include <stdio.h>
#include "ordena.h"


int main(){
    int vetorA[TAM];
    puts("Digite os elementos do vetor: ");
    for(int i=0; i<TAM; i++){
        scanf("%d", &vetorA[i]);
    }
    ordena_vetor(vetorA);
    puts("Vetor Ordenado: ");
    for(int i=0; i<TAM; i++){
        printf(" [%d]", vetorA[i]);
    }
    return 0;
}