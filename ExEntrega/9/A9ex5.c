#include <stdio.h>
#include <stdlib.h>

struct Nascimento{
    int dia;
    int mes;
    int ano;
};

struct Atual{
    int dia;
    int mes;
    int ano;
};

void Idade(struct Nascimento n, struct Atual a){
    int Ia, Im, Id;
    Ia= a.ano-n.ano;
    Im= a.mes-n.mes;
    Id= a.dia-n.dia;
    printf("Sua idade é %d anos, %d meses, %d dias",Ia,Im,Id);
}



int main(){
    struct Nascimento n;
    struct Atual a;
    printf("Digite a data de nascimento:\n");
    printf("Dia: ");
    scanf("%d",&n.dia);
    printf("Mês: ");
    scanf("%d",&n.mes);
    printf("Ano: ");
    scanf("%d",&n.ano);
    //só pra dividir a entrada das datas
    printf("Digite a data atual:\n");
    printf("Dia: ");
    scanf("%d",&a.dia);
    printf("Mês: ");
    scanf("%d",&a.mes);
    printf("Ano: ");
    scanf("%d",&a.ano);

    Idade(n, a);
    
    return 0;
}