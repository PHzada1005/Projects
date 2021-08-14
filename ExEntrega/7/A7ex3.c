#include <stdio.h>
#include <math.h>

void exponencial(int n, int *b, int *k){
  *b = 2;
  *k = 0;
  //força bruta
  while(*b<=n){
    if(pow(*b ,*k)==n){
      break;
    }
    else if (pow(*b,*k)>n){
      (*b)++;
      *k=0;
    }
    else
    (*k)++;
  }
}