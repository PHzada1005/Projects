#include <stdio.h>
#include <stdlib.h>

int seed=100;

int main(void){
    int m[10][5];
    srand(seed);

    for(int i=0; i<10; i++){
        for(int j=0; j<5; j++){
            m[i][j]= rand() % 101;
        }
    }

     for(int i=0; i<10; i++){
        for(int j=0; j<5; j++){
            printf("%3d ", m[i][j]);
        }
        printf("\n");
     }

    printf("\n");

      for(int i=0; i<5; i++){
        for(int j=0; j<10; j++){
            printf("%3d ", m[j][i]);
        }
        printf("\n");
     }

    return 0;

}