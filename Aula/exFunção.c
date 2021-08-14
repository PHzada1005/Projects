#include <stdio.h>
#include <math.h>

float potencia(float, int);
float hipotenusa(float, float);

void main(){
    printf("Hipotenusa: %.2f", hipotenusa(3,4));
}

float potencia(float x, int n){
    int i=0;
    float prod=1;
    while(i<n){
        prod=prod*x;
        i++;
    }
    return prod;
}

float hipotenusa(float c1, float c2){
    float h=sqrt(pow(c1,2)+pow(c2,2));
    return h;
}