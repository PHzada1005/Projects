#include <stdio.h>
#include <stdlib.h>


int main(){
    char *quatro_strings[4];

    for(int i=0; i<4; i++)
        quatro_strings[i]= malloc(sizeof(char)*5);

    puts("Digite os números:");
    fgets(quatro_strings[0],5,stdin);
    fgets(quatro_strings[1],5,stdin);
    fgets(quatro_strings[2],5,stdin);
    fgets(quatro_strings[3],5,stdin);

    int i1 = atoi(quatro_strings[0]);
    int i2 = atoi(quatro_strings[1]);
    int i3 = atoi(quatro_strings[2]);
    int i4 = atoi(quatro_strings[3]);

    int soma= i1+i2+i3+i4;

    printf("Soma = %d",soma);


    return 0;
}