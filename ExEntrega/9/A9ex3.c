#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Ponto{
    int x;
    int y;
};

struct Retangulo{
    struct Ponto pontos[4];
};

void perimetro (struct Retangulo r){
    float p=sqrt(pow((r.pontos[3].x-r.pontos[0].x),2)+pow((r.pontos[3].y-r.pontos[0].y),2));

    for (int i=0; i<3; i++){
        p=p+sqrt(pow((r.pontos[i+1].x-r.pontos[i].x),2)+pow((r.pontos[i+1].y-r.pontos[i].y),2));
    }
    printf("\nPerímetro: %.2f\n",p);
}
void area (struct Retangulo r){
    float l1=sqrt(pow((r.pontos[3].x-r.pontos[0].x),2)+pow((r.pontos[3].y-r.pontos[0].y),2));
    float l2=sqrt(pow((r.pontos[1].x-r.pontos[0].x),2)+pow((r.pontos[1].y-r.pontos[0].y),2));
    float a=l1*l2;
    printf("Área: %.2f",a );
}

int main (void){
    struct Retangulo ret;
    for (int i=0; i<4; i++){
        printf("Digite o x do ponto %d: ", i);
        scanf("%d", &ret.pontos[i].x);
        printf("Digite o y do ponto %d: ", i);
        scanf("%d", &ret.pontos[i].y);
    }
    perimetro(ret);
    area(ret);
    return 0;
}