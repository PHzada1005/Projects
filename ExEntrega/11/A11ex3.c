#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main(){
    int v[10];
    FILE *arq1 = fopen("numeros3.txt", "w");
    for(int i=0;i<10;i++){
        srand(time(NULL));
        v[i]=rand() % 5;
        fprintf(arq1, "%d\n", v[i]);
    }
    fclose(arq1);

    int v2[10]=v[10];
    FILE *arq2= fopen("numeros3unicos.txt", "w");
    for(int i=0;i<10;i++){
        if(v[i]==v2[i]){
            fprintf(arq2, "%d\n", v2[i]);
        }
        else
            fprintf(arq2, "%d\n", v2[i]);
    }
}