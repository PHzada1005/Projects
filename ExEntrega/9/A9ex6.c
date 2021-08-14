#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa{
    char nome[50];
    int idade;
    int telefone;
    char endereco[100];
    char cidade[50];
    char estado[50];
    int cep;
};

int inserirRegistro (char tipo[20],char valor[100], int n, struct pessoa a[100] ){
    if (strcmp(tipo, "nome")==0)
       strncpy(a[n].nome,valor,100);
    else if (strcmp(tipo, "idade")==0)
        a[n].idade=atoi(valor);
    else if (strcmp(tipo, "telefone")==0)
        a[n].telefone=atoi(valor);
    else if (strcmp(tipo, "endereço")==0)
        strncpy(a[n].endereco,valor,100);
    else if (strcmp(tipo, "cidade")==0)
        strncpy(a[n].cidade,valor,100);
    else if (strcmp(tipo, "estado")==0)
        strncpy(a[n].estado,valor,100);
    else if (strcmp(tipo, "cep")==0)
        a[n].cep = atoi(valor);
    return 0;
}

int removerRegistro (char tipo[20], int n, struct pessoa a[5] ){
    if (strcmp(tipo, "nome")==0)
       strcpy(a[n].nome, "vazio");
    else if (strcmp(tipo, "idade")==0)
        a[n].idade=0;
    else if (strcmp(tipo, "telefone")==0)
        a[n].telefone=0;
    else if (strcmp(tipo, "endereço")==0)
        strcpy(a[n].endereco, "vazio");
    else if (strcmp(tipo, "cidade")==0)
        strcpy(a[n].cidade, "vazio");
    else if (strcmp(tipo, "estado")==0)
        strcpy(a[n].estado, "vazio");
    else if (strcmp(tipo, "cep")==0)
        a[n].cep = 0;
    return 0;
}

void registroPeloNome(int n, struct pessoa a[5]){
    printf("Nome: %s\n", a[n].nome);
    printf("Idade: %d\n", a[n].idade);
    printf("Telefone: %d\n", a[n].telefone);
    printf("Endereço: %s\n", a[n].endereco);
    printf("Cidade: %s\n", a[n].cidade);
    printf("Estado: %s\n", a[n].estado);
    printf("CEP: %d\n", a[n].cep);
    
}
int main (void){
    struct pessoa agenda[5];
    inserirRegistro("nome","fulano",0, agenda);
    registroPeloNome(0, agenda);
    removerRegistro("nome", 0, agenda);
    
    
    return 0;
}