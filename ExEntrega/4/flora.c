#include <stdio.h>

int main (void){
    int matriz[4][4];
    int somadiagpri=0, somadiagsec=0, x=0, y=0,somalinha,somacoluna;
    int linha[4], coluna[4];

     for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("%2d ", matriz[i][j]);
            
        }
        printf("\n");
    }

    for (int i=0;i<4;i++){
        somalinha = 0;
        for (int j=0;j<4;j++)
            somalinha = somalinha + matriz[i][j];
        linha [i] = somalinha;
    }

    for (int j=0;j<4;j++){
        somacoluna = 0;
        for (int i=0;i<4;i++)
            somacoluna = somacoluna + matriz[i][j];
        coluna [j] = somacoluna;
    }

    for (int i=0;i<4;i++)
        somadiagpri = somadiagpri + matriz[i][i];

    for (int i=0;i<4;i++){
        somadiagsec = somadiagsec + matriz [i][3-i];
    }

    for (int i=1;i<4;i++){
        if (linha[0]==linha[i])
            x++;
        if (coluna[0]== coluna[i])
            y++;
    }

    if (x==3 && y==3 && linha[0]==coluna[0] && coluna[0]==somadiagpri && coluna[0]==somadiagsec && linha[0]==somadiagpri && linha[0]==somadiagsec)
          printf("Essa matriz forma o quadrado mágico");
    else
        printf("Essa é uma Matriz comum");
    return 0;
}