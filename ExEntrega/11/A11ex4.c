#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nome[50];
    printf("Digite o nome do arquivo que deseja ler: ");
    scanf("%s", nome);

    char frase[50];
    FILE *arq = fopen(nome, "r");
    if(arq == NULL){
        puts("Não abriu o arquivo");
        exit(1); // lembrar usar com stdlib.h
    }
    int vogais = 0;
    int conso = 0;
    while(!feof(arq)){
        fscanf(arq, "%s", frase);
        for(int i=0; i < strlen(frase); i++){
            if(frase[i]==65 || frase[i]== 97)
                vogais++;
            else if(frase[i]==69 || frase[i]== 101)
                vogais++;
            else if(frase[i]==73 || frase[i]== 105)
                vogais++;
            else if(frase[i]==79 || frase[i]== 111)
                vogais++;
            else if(frase[i]==85 || frase[i]== 117)
                vogais++;
            else if (frase[i] > 66 && frase[i] < 69)
                conso++;
            else if (frase[i] > 69 && frase[i] < 73)
                conso++;
            else if (frase[i] > 73 && frase[i] < 79)
                conso++;
            else if (frase[i] > 79 && frase[i] < 85)
                conso++;
            else if (frase[i] > 85 && frase[i] < 91)
                conso++;
            else if (frase[i] > 97 && frase[i] < 101)
                conso++;
            else if (frase[i] > 101 && frase[i] < 105)
                conso++;
            else if (frase[i] > 105 && frase[i] < 111)
                conso++;
            else if (frase[i] > 111 && frase[i] < 117)
                conso++;
            else if (frase[i] > 117 && frase[i] < 123)
                conso++;
        }
    }
    fclose(arq);
    printf("O arquivo possui %d vogais e %d consoantes", vogais, conso);
    
    return 0;
}