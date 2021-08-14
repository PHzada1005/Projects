#include <stdio.h>

void triplo(int *pa, int *pb, int *pc){
    *pa=3*(*pa);
    *pb=3*(*pb);
    *pc=3*(*pc);
} 

int main(void){
    int a=2, b=3, c=4;
    triplo(&a, &b, &c);
    printf("Triplo: %d %d %d", a,b,c);


    return 0;
}