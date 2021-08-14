#include <stdio.h>
#include "media.h"


int main(){
    int matrizA[TAM][TAM];
    puts("Digite os elementos da matriz A: ");
    puts("Ao finalizar digite 'ok' para sair");
    for(int i=0; i<TAM; i++){
        for(int j=0; i<TAM; j++){
            scanf("%d ", &matrizA[i][j]);
        }
    }

    puts("A média aritimética dos elementos abaixo da diagonal principal é: ");
    printf("%d", media_ari(matrizA));

    return 0;

}