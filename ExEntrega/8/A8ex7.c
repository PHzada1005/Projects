#include <stdio.h>
#include <string.h>

int main (void){
    char frase[100]="ola mundo";
    char letra[1]="a";
    int repeticao[26];
    for (int i=0; i<27; i++)
        repeticao[i]=0;
    fgets(frase, 100, stdin);
    for (int j=0; j<27; j++){
        for (int i=0; i<strlen(frase); i++){
            if ((letra[0]+j)==frase[i] || (letra[0]+j-32)==frase[i] )
                repeticao[i]++;   
        }
    }
    for (int i=0; i<27; i++){
        printf("Letra %s: %d \n", (letra+i),repeticao[i]);
    }
    return 0;
}