#include <stdio.h>
#include <stdlib.h>

int seed = 100;
//char cartas[52][500]={"A de C","2 de C","3 de C","4 de C","5 de C","6 de C","7 de C","8 de C","9 de C","0 de C","Q de C","J de C","K de C","A de O","2 de O","3 de O","4 de O","5 de O","6 de O","7 de O","8 de O","9 de O","0 de O","Q de O","J de O","K de O","A de P","2 de P","3 de P","4 de P","5 de P","6 de P","7 de P","8 de P","9 de P","0 de P","Q de P","J de C","K de P","A de E","2 de E","3 de E","4 de E","5 de E","6 de E","7 de E","8 de E","9 de E","0 de E","Q de E","J de E","K de E",};
char cartas[13][13]={"A","2","3","4","5","6","7","8","9","0","Q","J","K"};
char naipe[4][4]={"C","O","P","E"};

struct Baralho{
    char cartas[13];
    char naipe[4];
};


int main(){
    struct Baralho bar;
    int z=0;
    int c[52];
    printf("==== Cartas do Jogador 1 ====\n");
    for (int i = 0; i < 4; i++){
        srand(seed);
        z=rand()%52;
        c[z]=bar.cartas;
        printf("%d\n",c[z]);
    
    }
    printf("=============================\n");
    printf("==== Cartas do Jogador 2 ====\n");
    for (int i = 0; i < 4; i++){
        srand(seed);
        z=rand()%52;
        c[z]=bar.cartas;
        printf("%d\n",c[z]);
    
    }
}