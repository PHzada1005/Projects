#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int seed=100;
int v[10];
int cont;


int main(void){
    srand(seed);
    for(int i=0; i<10; i++){
        v[i]=rand()%101;
            if(v[i]>50){
                printf("%d ", v[i]);
                 cont++;
                
            }
    }
    
    printf("\nHá %d números maiores que 50 nas posições: ", cont);
    for (int i=0; i<10; i++){
        if (v[i]>50)
            printf("%d ", i);
    }

    return 0;
}