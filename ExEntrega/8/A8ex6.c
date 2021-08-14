#include <stdio.h>
#include <string.h>

int main (void){
    char caractere[2]="o";
    char frase[100]="ola mundo";
    int cont=0;
    puts("Digite uma frase:");
    fgets(frase, 99, stdin);
    puts("Digite um caractere:");
    scanf("%s", caractere);
    for (int i=0; i<strlen(frase); i++){
      if (caractere[0]==frase[i])
        cont++;
    }
    printf("O caractere %s foi encontrado %d vezes", caractere, cont);   


    return 0;
}