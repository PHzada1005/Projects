#include <stdio.h>


int pot( int base, int exp){
    if(exp==1)
        return base;
    else
        return(base*pot(base,exp-1));
}


int main(){
    int base, exp;
    puts("Digite a base: ");
    scanf("%d",&base);
    puts("Digite a expoente: ");
    scanf("%d",&exp);
    printf("Resultado: %d", pot(base,exp));
    return 0;
}