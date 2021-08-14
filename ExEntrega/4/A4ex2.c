#include <stdio.h>
#include <stdlib.h>

int seed=100;
int soma;

int main(void){
    int m[8][8];
    srand(seed);

    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            m[i][j]= rand() % 101;
        }
    }

     for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            printf("%3d ", m[i][j]);
        }
         printf("\n");
     }
    for(int i=0; i<8; i++){
        soma = soma + m[i][i];
    }

     printf("A soma da diagonal principal é %d",soma);

    return 0;

}