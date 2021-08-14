#include <stdio.h>

int mdc(int x, int y){
    if(y==0){
        return x;
    }
    else{
        return mdc(y,x%y);
    }
}



int main(){
    printf("%d",mdc(12,18));

    return 0;
}