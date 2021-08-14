#include <stdio.h>
#include "soma.h"


int main(){
    int n1, n2;
    puts("Digite os dois números: ");
    scanf("%d %d", &n1, &n2);
    printf("Somatória entre os números é: %d",soma_entre_numeros(n1,n2));


    return 0;
}