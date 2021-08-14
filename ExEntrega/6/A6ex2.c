#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    float soma=0,media=0;
    
    printf("Digite a quantidade de alunos: \n");
    scanf("%d",&n);
    float *ptr= (float*)malloc(n*sizeof(float));

    if(ptr==NULL){
        printf("Memoria nao alocada!");
    }

    else{
        printf("Digite as notas");
        for(int i=0; i<n; i++){
            scanf("%f", &ptr[i]);
        }
        for(int i=0; i<n; i++){
            soma=soma+ptr[i];
        }
        media=soma/n;
        printf("Media: %.2f",media);
        free(ptr);
    }

    return 0;
}