#include <stdio.h>

int main(void){
    int matriz[4][4];
    float somai,somaj,diagP,diagS;

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("%2d ", matriz[i][j]);
            
        }
        printf("\n");
    }
     for(int i=0; i<4; i++){
        somai=0;
        somaj=0;
        for(int j=0; j<4; j++){
            somai=somai+i;
            somaj=somaj+j;
        }
     }
     for(int i=0; i<4; i++){
         diagP=diagP+matriz[i][i];
         diagS=diagS+matriz[i][3-i];
     }
     
    if(somai==somaj && diagP==diagS && somai==diagP && somai==diagS && somaj==diagP && somaj==diagS)
        printf("Essa matriz forma o quadrado mágico");
    else
        printf("Essa é uma Matriz comum");

    
    return 0;
}