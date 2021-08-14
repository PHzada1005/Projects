#include <stdio.h>

int main(void){
    int menor = 1000000;
    int T[4] = {1, 7 ,2 ,4};
    for(int i=0; i<4; i++){
        if(T[i]<menor){
            menor=T[i];
        }
    }
    printf("O menor valor é %d\n",menor);
    
    
}