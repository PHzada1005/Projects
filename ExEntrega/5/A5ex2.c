#include <stdio.h>

int main() {
    char l1,l2,l3,l4,l5;
    char *pl1,*pl2,*pl3,*pl4,*pl5;
    printf("Digite a 1ª letra: ");
    pl1 = &l1;
    scanf(" %c",pl1);
    printf("Digite a 2ª letra: ");
    pl2 = &l2;
    scanf(" %c",pl2);
    printf("Digite a 3ª letra: ");
    pl3 = &l3;
    scanf(" %c",pl3);
    printf("Digite a 4ª letra: ");
    pl4 = &l4;
    scanf(" %c",pl4);
    printf("Digite a 5ª letra: ");
    pl5 = &l5;
    scanf(" %c",pl5);

    printf("Letra: %c\n",*pl1);
    printf("Letra: %c\n",*pl2);
    printf("Letra: %c\n",*pl3);
    printf("Letra: %c\n",*pl4);
    printf("Letra: %c\n",*pl5);

    return 0;
}