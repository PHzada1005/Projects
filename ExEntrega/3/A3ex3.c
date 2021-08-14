# include <stdio.h>

temperaturas[];

int main (void){
    int  menor=temperaturas[0], maior=temperaturas[0];
    float media, soma=0;
    for (int i=0; i<8; i++){
        soma=soma+temperaturas[i];
        if (temperaturas[i]<menor){
            menor=temperaturas[i];
        }
    }
    for (int i=0; i<8; i++){
        if (temperaturas[i]>maior){
            maior=temperaturas[i];
        }
    }
    media=soma/8;
    printf("O menor valor é %d\n", menor);
    printf("O Maior valor é %d\n", maior);
    printf("A média de temperaturas é %.1f", media);
    return 0;
}