#include <stdio.h>
#include <string.h>

char nomes[5][50] = {"livro01", "livro02", "livro03", "livro04", "livro05"};
char editoras[5][50] = {"editora01", "editora02", "editora03", "editora04", "editora05"};
int isbns[5] = {111, 222, 333, 444, 555};
int anos[5] = {1990, 2010, 1995, 2015, 2011};
int paginas[5] = {1000, 220, 500, 800, 150};

struct Livro{
    char nome[50];
    char editora[50];
    int isbn;
    int ano;
    int paginas;
};

void receberDados(struct Livro livros[]){
    for(int i=0; i<5; i++){
        strcpy(livros[i].nome, nomes[i]);
        strcpy(livros[i].editora, editoras[i]);
        livros[i].isbn= isbns[i];
        livros[i].ano= anos[i];
        livros[i].paginas= paginas[i];

    }
}

void exibirInfo(struct Livro livros[]){
    float soma=0;
    struct Livro novo=livros[0];
    struct Livro velho=livros[0];
    for(int i=0;i<5;i++){
        if(livros[i].ano>novo.ano)
            novo=livros[i];
        if(livros[i].ano<velho.ano)
            velho=livros[i];
        soma=soma+livros[i].paginas;
    }
    float media= soma/5;
    printf("Média das páginas dos livros cadastrados: %.0f\n", media);
    printf("Livro mais novo: %s (publicado em %d)\n", novo.nome, novo.ano);
    printf("Livro mais velho: %s (publicado em %d)\n", velho.nome, velho.ano);

}

int main(){
    struct Livro livros[5];
    receberDados(livros);
    exibirInfo(livros);

    return 0;
}