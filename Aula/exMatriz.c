#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int m[10][15];
    srand(time(NULL));

    for(int i=0; i<10; i++)
        for(int j=0; j<15; j++)
            m[i][j]= rand() % 100;
    
     for(int i=0; i<10; i++)
        for(int j=0; j<15; j++)
            printf("%d", m[i][j]);
        printf("\n");
    
    printf("\n");
     for(int i=0; i<15; i++){
        printf("%d", m[1][i]);
     }


}