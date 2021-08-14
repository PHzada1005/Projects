#include <stdio.h>
#include<stdlib.h> 
 
int main(){ 
    int v[10000],i=0, tam, dif=1; 
    FILE *arq; 
    FILE *arq2; 
    arq=fopen("numeros3.txt", "r");
    while(!feof(arq)){ 
        fscanf(arq, "Xd",&v[i]);
        i++;
    }
    tam=i;
    fclose(arq); 
    arq2=fopen("numeros3unicos.txt", "w");
    for(int i=0;i<tam-1;i++){ 
        int j=1; 
        while(j<i){ 
            if(v[j]==v[i]){
                dif=0;
                break; 
            } 
            else 
                dif=1;
            j++; 
        }
        if(dif==1){
            fprintf(arq2, "Xd\n",v[i]);
        }
         
         
         
    }  
    fclose(arq2); 
    return 0; 
}