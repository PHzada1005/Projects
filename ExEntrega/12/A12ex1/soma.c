#include "soma.h"


int soma_entre_numeros(int n1, int n2){
    int menor = n1;
    int maior = n2;
    int soma=0;
    if(n1>n2){
        menor=n2;
        maior=n1;
    }
    for(int i=menor+1;i<maior;i++){
        soma = soma + i;
    }

    return soma;
}