#include "calculo.h"

void somatoria(int vetor[TAM]){
    int soma = 0;
    for (int i = 0; i < TAM; i++)
    {
        soma= soma + vetor[i];
    }
    printf("Somatoria: %d", soma);
}

void media(int vetor[TAM]){
    int soma = 0;
    float media;
    for (int i = 0; i < TAM; i++)
    {
        soma= soma + vetor[i];
    }
    media =soma/TAM;
    printf("Media: %.2f", media);
}