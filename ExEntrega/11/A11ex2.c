#include <stdio.h>
#include <stdlib.h>

int main(){
    int v[500];
    int i=0;
    FILE *arq1= fopen("pares.txt", "w");
    int n=0;
    while(n<1000){
        if(n%2==0){
            fprintf(arq1, "%d\n", n);
        }
        n++;
    }
    fclose(arq1);

    arq1 = fopen("pares.txt","r");
    while(!feof(arq1)){
        fscanf(arq1, "%d", &v[i]);
        i++;
    }
    fclose(arq1);

    FILE *arq2 = fopen("pares_invertidos.txt", "w");
    for(int i=499; i>=0; i--){
        fprintf(arq2,"%d\n",v[i]);
    }
    fclose(arq2);

    return 0;
}


