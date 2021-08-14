#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("Digite a quantidade de elementos do vetor: \n");
    int q;
    scanf("%d", &q);

    int soma=0;
    int *arr = (int*)malloc(q*sizeof(int));

    if(arr==NULL){
        printf("Memoria nao alocada!");
    }
    else{
        printf("Digite os valores de  cada elemento do vetor: \n");
        for(int i=0; i<q; i++){
            scanf("%d", &arr[i]);
        }
        for(int i=0; i<q; i++){
            if(*arr<arr[i]){
                *arr=arr[i];
        }
    }
        free(arr);
    }
    return 0;
}