#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("Entre com o valor de n: \n");
    int n;
    scanf("%d", &n);

    int soma=0;
    int *ptr = (int*)malloc(n*sizeof(int));

    if(ptr==NULL){
        printf("Memoria nao alocada!");
    }
    else{
        printf("Digite os valores dos n elementos: \n");
        for(int i=0; i<n; i++){
            scanf("%d",&ptr[i]);
        }
        for(int i=0; i<n; i++){
            soma=soma+ptr[i];
        }
        printf("Soma: %d\n",soma);
        free(ptr);
    }
    return 0;
}