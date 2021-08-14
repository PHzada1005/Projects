#include <stdio.h>
#include <stdlib.h>

int seed=90;
int soma,menor,prova,cont;

int main(void){
    int m[10][3];
    srand(seed);

    for(int i=0; i<10; i++){
        for(int j=0; j<3; j++){
            m[i][j]= rand() %11;
        }
    }

     for(int i=0; i<10; i++){
        for(int j=0; j<3; j++){
            printf("%2d ", m[i][j]);
        }
         printf("\n");
     }
    for (int i=0;i<10;i++){
        menor = 11;
        for (int j=0;j<3;j++){
            if (m[i][j]<menor){
                menor = m[i][j];
                prova = j;
            }
        }
        printf("Aluno %d: Menor nota na prova %d com nota %d\n",i+1,prova+1,menor);
        
    }
    for (int j=0;j<3;j++){
        menor = 11;
        cont = 0;
        for (int i=0;i<10;i++){
            if (m[i][j]<menor){
                menor = m[i][j];
            }
        }
        for (int i=0;i<10;i++){
            if (menor == m[i][j])
            cont++;
        }
        printf("%d alunos ficaram com %d na prova %d\n",cont,menor,j+1);
    }
    
    return 0;
}