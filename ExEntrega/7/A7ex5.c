#include <stdio.h>

int verifica(int *d,int *m,int *a){
    int *v=0;
    while(*a<100 || *m<13 || *d<32){
            *v=(*d)*(*m);
            return *v;
            }
    if(*v==*a)
      return 1;
    else
      return 0;
  }


int main(void){
    int d=1;
    int m=1;
    int a=1;

    while(verifica(&d, &m, &a)==1){
        printf("A data %d/%d/19%d é mágica", d,m,a);
    }



    return 0;
}