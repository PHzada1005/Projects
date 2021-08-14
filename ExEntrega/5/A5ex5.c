#include<stdio.h>

float m[3][3];
int i, j;
int *p;

int main (){
  for ( i=0; i<3; i++ ){
    for ( j=0; j<3; j++ ){
      printf ("\n[%d][%d] = ", i, j);
      scanf ("%d", &m[i][j]);
    }
  }
  for ( i=0; i<3; i++ ){
    for ( j=0; j<3; j++ ){
      *p=m[i][j];

      printf ("\n [%p] \n",*p);
    }
  }
  
  return(0);
}