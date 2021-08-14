#include <stdio.h>
#include <stdlib.h>


int calcula(int p, float f){
    for(int i=1; i<p; i++){
        f=f+2.95;
    }
    printf("O valor do frete é de: %.2f",f);
    return f;
}


int main(){
    int p;
    float f;
    f=10.95;
    printf("Insira a quantidade de produtos comprados: " );
    scanf("%d", &p);
    calcula(p,f);

    return 0;
}