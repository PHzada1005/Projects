#include <stdio.h>
#include <stdlib.h>


int main(){
    FILE *arq;
    arq=fopen("notas.txt", "r");
    while(!feof(arq)){
        fscanf(arq, "%d", &v[i]);
        i++;
    }
    fclose(arq);

    return 0;
}