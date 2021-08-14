#include <stdio.h>



int soma(int x, int v[]){
    if (x==0){
        return 0;
    }
    else{
        return (v[x-1]+soma(x-1,v));
    }
}


int main(){
    int vetor[] = {1, 2, 3, 4, 5};
    printf("Soma do vetor: %d\n", soma(5, vetor));


    return 0;
}