#include <stdio.h>

int quociente(int *a, int *b){
    int q=0;
    while(*a>=*b){
        *a=(*a)-(*b);
        q++;
    }


    return q;
}

int main(void){
    int a, b, q;
    printf("Digite o dividendo: ");
    scanf("%d", &a);
    printf("Digite o divisor: ");
    scanf("%d", &b);

    q = quociente(&a, &b);
    printf("O quociente é %d com resto %d", q,a);



    return 0;
}
