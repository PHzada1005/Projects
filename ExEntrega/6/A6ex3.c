#include <stdio.h>
#include <stdlib.h>

int main(void){
    int q;
    printf("Digite o tamanho da palavra: \n");
    scanf("%d",&q);
    char *palavra= (char*)malloc(q*sizeof(char));

    if(palavra==NULL){
        printf("Memoria nao alocada!");
    }

    else{
        printf("Digite as letras \n");
        for(int i=0; i<q; i++){
            scanf(" %c", &palavra[i]);
        }
        printf("%s \n",palavra);
        free(palavra);
    }

    return 0;
}