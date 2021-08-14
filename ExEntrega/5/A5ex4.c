#include <stdio.h>
#include <stdlib.h>

int main() {
    int v[5];
    int *pl1,*pl2,*pl3,*pl4,*pl5;
    printf("Digite o 1º número: ");
    pl1 = &v[1];
    scanf(" %d",pl1);
    printf("Digite o 2º número: ");
    pl2 = &v[2];
    scanf(" %d",pl2);
    printf("Digite o 3º número: ");
    pl3 = &v[3];
    scanf(" %d",pl3);
    printf("Digite o 4º número: ");
    pl4 = &v[4];
    scanf(" %d",pl4);
    printf("Digite o 5º número: ");
    pl5 = &v[5];
    scanf(" %d",pl5);

    printf("Dobro dos valores:[%d %d %d %d %d]",v[1]*2,v[2]*2,v[3]*2,v[4]*2,v[5]*2);

    return 0;
}