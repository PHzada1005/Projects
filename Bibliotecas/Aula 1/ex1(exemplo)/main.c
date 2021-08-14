#include <stdio.h>
#include "triangulo.h"

int main(){
    float c1, c2;
    puts("Digite o primeiro cateto: ");
    scanf("%f",&c1);
    puts("Digite o segundo cateto: ");
    scanf("%f",&c2);
    printf("Hipotenusa: %.2f\n",hipotenusa(c1,c2));
    return 0;
}