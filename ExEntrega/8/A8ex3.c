#include <stdio.h>
#include <string.h>

void valorSeguro(char *string, float numero){
    char texto[20] = "";
    char valor[20];
    sprintf(valor, "%.2f", numero);
    strcat(texto, string);

    int diferenca = 9 - strlen(valor);

    for(int i=0; i<diferenca; i++)
        strcat(texto, "*");

    strcat(texto, valor);

    puts(texto);
}

int main(){
    valorSeguro("texto = ",12.75);

    return 0;
}

