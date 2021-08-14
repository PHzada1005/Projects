#include <stdlib.h>

int main(){
    int *i=(int*)malloc(sizeof(int));
    float *f=(float*)malloc(sizeof(float));
    char *k=(char*)malloc(sizeof(char));

    scanf("%d",i);
    printf("%d",*i);

    return 0;
}