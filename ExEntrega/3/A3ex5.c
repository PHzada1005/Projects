#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int seed=100;
int v[20];
int i;
int j;
int ord;

int main(void){
        srand(seed);
        for (i = 0; i<20; i++){
            v[i]=rand()%201;
        }
    for (i=0;i<20; i++)
        for(j=i+1;j<20;j++)
        {
            if (v[i]>v[j])
            {
                ord=v[i];
                v[i]=v[j];
                v[j]=ord;
            }
        }
    for (i=0;i<20; i++)
        printf("%d ",v[i]);
}