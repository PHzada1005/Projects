#include <stdio.h>
#include <stdlib.h>


int main(){
    char nome[30];
    unsigned int telefone;
    FILE *arq;

    arq = fopen("cadastro.txt", "a");
    if(arq==NULL){
        puts("Não abriu o arquivo!");
        exit(1);
    }

    puts("O arquivo foi aberto com sucesso!");
    while(1){
        puts("Entre com o nome e o telefone do usuário");
        puts("Digite 0 no telefone para sair: ");
        scanf("%s %d\n", nome, telefone);
        if(telefone==0)
            break;
        fprintf(arq,"%s %d\n", nome, telefone);
    }
    fclose(arq);

    return 0;
}