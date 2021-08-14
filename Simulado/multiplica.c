#include <stdio.h>
#include <stdlib.h>


int multiplica(int m[4][3], int v[]){
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            m[i][j]=m[i][j]*v[j];
        }
    }
  return 0;
}


int main(){
  int m[4][3] = {{1,2,3},{4,5,6},{3,2,1},{10,11,12}};
  int vetor[3] = {4,3,2};
  multiplica(m, vetor);
  for(int i = 0; i < 4; i++) {
    printf("|");
    for(int j = 0; j < 3; j++) {
      printf("%3d", m[i][j]);
    }
    printf(" |\n");
  }

  return 0;
}