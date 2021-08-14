#include <stdio.h>



int inverte(int x,int v[]){
    if(x==0){
        return 0;
    }
    else{
        printf("%d ", v[x-1]);
        return (v[x-1]+inverte(x-1,v));
    }
    
}


int main(){
    int vetor[] = {10, 20, 30, 40, 50, 60, 70};
    int size = sizeof(vetor) / sizeof(int);
    inverte(size, vetor);
    
    return 0;
}