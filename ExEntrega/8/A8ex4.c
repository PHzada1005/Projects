#include <stdio.h>
#include <string.h>

void transforma(char data[12],int *dia, int *mes, int *ano){
    char separacao;
    sscanf(data, "%d %c %d %c %d", dia, &separacao, mes, &separacao, ano);
    printf("Separador indentificado: %c\n", separacao);


}




int main(){
    char data[11];
    int dia, mes, ano;
    puts("Digite uma data:");
    fgets(data, 11, stdin);
    transforma(data, &dia, &mes, &ano);
    printf("Dia: %d, Mês: %d, Ano: %d", dia,mes,ano);


    return 0;
}