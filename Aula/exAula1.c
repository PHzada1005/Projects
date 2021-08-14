#include <stdio.h>

int main(void){
    float v[10];
    for(int i=0; i<10; i++)
        scanf("%f", &v[i]);

    float maior = 0;
    int indici_maior = 0;
    for(int i=0; i<10; i++){
        if(maior<v[i])
            maior=v[i];
            indici_maior = i;
        }
    
    printf("maior elemento: %.f \n",maior);
    printf("indice do maior: %d \n",indici_maior);
    return 0;
}