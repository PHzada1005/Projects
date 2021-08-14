#include <stdio.h>

int fatorial(int n){
    int fat=1;
    int cont=1;

    while(cont<=n){
        fat=fat*cont;
    }
    return fat;
}



int main(){
    printf("%d\n",fatorial(5));
    return 0;
}