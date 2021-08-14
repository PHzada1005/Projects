#include <stdio.h>
#include <stdlib.h>

int seed=100;
int soma;

int main(void){
    int m[12][12];
    srand(seed);

    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            m[i][j]= rand() % 101;
        }
    }

     for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            printf("%3d ", m[i][j]);
        }
         printf("\n");
     }
    for(int j=0; j<12; j++){
        for(int i=j+1; i<12; i++){
            soma = soma + m[i][j];
        }
    }

     printf("Soma: %d",soma);

    return 0;

}