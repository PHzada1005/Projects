#include <stdio.h>
#include <math.h>

int main(void){
    int x, y,x1,y1,x2,y2;
    float per;
    printf("Digite o x da coordenada:\n");
    scanf("%d", &x1);
    x2=x1;
    printf("Digite o y da coordenada:\n");
    scanf("%d", &y1);
    y2=y1;
    while(1){
        printf("Digite o x da coordenada:\n");
        scanf ("%d", &x);
        if (x==-99){
            per=per+sqrt(pow(x1-x2,2)+pow(y1-y2,2));
            break;
        }
        printf("Digite o y da coordenada:\n");
        scanf("%d", &y);
        per=per+sqrt(pow(x-x1,2)+pow(y-y1,2));
        x1=x;
        y1=y;
    }
    printf("Perímetro total de %.2f\n", per);
    return 0;
}