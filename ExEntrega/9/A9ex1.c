#include <stdio.h>

struct Aluno{
    char nome[30];
    char sobrenome [30];
    char curso [50];
    int ra;
};

void printAlunos(struct Aluno a[5]){
    for(int i=0;i<5;i++){
        printf("Aluno: %s %s",a[i].nome,a[i].sobrenome);
        printf("Curso: %s", a[i].curso);
        printf("Matrícula: %s", a[i].ra);
        puts("");
    }
}

int main(){
    struct Aluno alunos[5];
    char lixo[5];
    puts("Digite os dados dos alunos: \n");
    for(int i=0; i<5;i++){
        printf("Digite o nome do aluno %d: ", i+1);
        fgets(alunos[i].nome,30,stdin);
        printf("Digite o sobrenome do aluno %d: ", i+1);
        fgets(alunos[i].sobrenome,30,stdin);
        printf("Digite o curso do aluno %d: ", i+1);
        fgets(alunos[i].curso,50,stdin);
        printf("Digite a matrícula do aluno %d: ", i+1);
        scanf("%d", &alunos[i].ra);
        fgets(lixo,5,stdin);
        puts("");
    }
    puts("Imprimindo os alunos cadastrados:");
    printAlunos(alunos);

    return 0;
}
