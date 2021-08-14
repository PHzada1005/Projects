#include <stdio.h>

int main(void){
    int v[10];
    for(int i=0; i<10; i++){
        scanf("%d", &v[i]);
    }

    printf("Abaixo estão os números que atendem a condição\n");
    for(int i=2; i<10; i++){
        if(v[i-1]+v[i-2]<v[i]){
            printf("%d\n",v[i]);
        }
    }
    return 0;
}