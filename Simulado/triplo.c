#include <stdio.h>
#include <stdlib.h>


int triplo(float *a,float *b,float *c){
    *a=(*a)*3;
    *b=(*b)*3;
    *c=(*c)*3;

    return 0;
}

int main(){
  float a=1.2, b=3.7, c=80.1;
  triplo(&a, &b, &c);
  printf("a=%.2f b=%.2f c=%.2f", a, b, c);
  return 0;
}