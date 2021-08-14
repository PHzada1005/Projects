#include <stdio.h>

int podeDoar(char , float );

int main(void){
    char sexo;
    float peso;

    printf("Digite seu sexo (m ou f):");
    scanf(" %c",&sexo);
    printf("Digite seu peso em kg:");
    scanf(" %f",&peso);

    if(podeDoar(sexo, peso)==1){
        printf("Você pode doar sangue!");
    }
    else{
      printf("Você não pode doar sangue!");
    }
    return 0;
}

int podeDoar(char s, float p){
    if((s=='m' && p>=60) || (s=='f' && p>=50))
        return 1;
    else
        return 0;
    
}