#include <stdio.h>
#include <stdlib.h>

int seed=100;
int menor,maior,posI,posJ;

int main(void){
    int m[5][6];
    srand(seed);
    menor=10001;
    maior=0;

    for(int i=0; i<5; i++){
        for(int j=0; j<6; j++){
            m[i][j]= rand() % 1001;
        }
    }
    for(int i=0; i<5; i++){
        for(int j=0; j<6; j++){
            printf("%4d ", m[i][j]);
            if (m[i][j]< menor)
                menor=m[i][j];
        }
         printf("\n");
     }
    for(int i=0; i<5; i++){
        for(int j=0; j<6; j++){
            if (m[i][j]==menor){
                posI=i;
            }
        }
    }
    for (int j=0; j<6; j++){
        if (m[posI][j]>maior){
            maior=m[posI][j];
            posJ=j;
    }
  }


    printf("MINMAX=%d na linha %d coluna %d",maior,posI,posJ);


    return 0;

}