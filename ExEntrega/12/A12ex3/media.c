#include "media.h"



int media_ari(int matriz[TAM][TAM]){
    int soma;
    int media;
    for (int i = 0; i < 11; i++){
        soma=soma+matriz[i+1][i];
    }
    media=soma/12;

    return media;
}