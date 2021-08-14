#include <stdio.h>

int main(void){
    int m[4][4];
    int v[4];

    for(int i=0; i<4; i++)
        for(int j=0; j<4; j++)
            scanf("%d", &m[i][j]);

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++)
            printf("%d\t", m[i][j]);
        printf("\n");
    }

    for(int i=0; i<4; i++){
        v[i]=0;
        for(int j=0; j<4; j++){
            if(m[i][j] %2 !=0)
                v[i]=v[i]+m[i][j];
        }
    }

    printf("vetor:\n");
    for(int i=0; i<4; i++)
        printf("%d ", v[i]);

    return 0;

}