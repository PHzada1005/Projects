#include <stdio.h>

int main() {
    char v[5];
    char *pl1,*pl2,*pl3,*pl4,*pl5;
    printf("Digite a 1ª letra: ");
    pl1 = &v[1];
    scanf(" %c",pl1);
    printf("Digite a 2ª letra: ");
    pl2 = &v[2];
    scanf(" %c",pl2);
    printf("Digite a 3ª letra: ");
    pl3 = &v[3];
    scanf(" %c",pl3);
    printf("Digite a 4ª letra: ");
    pl4 = &v[4];
    scanf(" %c",pl4);
    printf("Digite a 5ª letra: ");
    pl5 = &v[5];
    scanf(" %c",pl5);

    printf("Letra: %c\n",*pl1);
    printf("Letra: %c\n",*pl2);
    printf("Letra: %c\n",*pl3);
    printf("Letra: %c\n",*pl4);
    printf("Letra: %c\n",*pl5);

    return 0;
}