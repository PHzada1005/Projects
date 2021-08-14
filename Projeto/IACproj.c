// Nome , turma e RA
// Pedro Henrique Silva Reis, 050(Teoria) 350(Laboratório) , 11.120.129-9 

// entrando com as bibliotecas necessárias
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

// variaveis principais
int d, op, n, c;

// definindo as funções antes de usalas
int menu(void);
int dificuldade(int *);
void operacao(int *, int *, int *);
void op5_mista(int *, int *, int *);
void correto(void);
void incorreto(void);
int final(int *);


// função principal do progama que vai definir a ordem de chamada para cada função
int main(void){
    menu();
    dificuldade(&d);
    operacao(&n, &op, &c);
    final(&c);

    return 0;
}

int menu(void){
    // menu de entrada
    printf("------------------------------Bem vindo ao progama IAC------------------------------ \n");
    // armazena o nivel da dificuldade
    printf("Por favor insira o nível de dificuldade: (níveis de 1 a 7) \n");
    scanf("%d", &d);
    // previne que o úsuario insira valores inválidos para o progama
    while(d<1 || d>7){
        printf("Você inseriu um valor inválido \n");
        printf("Por favor tente novamente \n");

        return main();
     }
    // armazena o tipo de operação
    printf("Insira qual operação você deseja estudar: \n 1 para adição \n 2 para subtração \n 3 para multiplicação \n 4 para divisão \n 5 para uma mistura de tudo \n");
    scanf("%d",&op);
    // previne que o úsuario insira valores inválidos para o progama
    while(op<1 || op>5){
        printf("Você inseriu um valor inválido \n");
        printf("Por favor tente novamente \n");

        return main();
    }

    //retorna as variaveis
    return d;
    return op;
}

int dificuldade(int *d){
    // assume um valor para variavel de nivel gerar os números aleatórios de acordo com o grau de dificuldade
    n = pow(10, *d);

    // retorna a variavel
    return n;
}

void operacao(int *n, int *op, int *c){
    // define as variaveis que serão utilizadas nessa função
    int a, b, t;
    float r;
    *c= 0;

// sequência de "ifs" que definirão qual operação o progama deve realizar 
// tudo de acordo com a operação escolhida e definida no menu

    if(*op==1){
        printf("******************Adição******************\n");
        // sistema de repetição para que o progama gere 10 perguntas
        for(int i=0; i<10; i++){
            // geração dos números aleatórios
            srand(time(NULL));
            a=rand() % *n;
            b=rand() % *n;

            // o progama faz a pergunta ao usúario e recebe a resposta
            printf("Quanto é %d mais %d ?\n", a,b);
            scanf("%f",&r);
            printf("\n");

            //teste da resposta
            if(r==a+b){
                printf("A resposta está correta!\n");
                // após a confirmação da resposta, o progama soma um ponto na variavel 'c' que serve para porcentagem de acertos
                *c=*c+1;

                //o progama chama uma função que gera uma frase motivacional
                correto();
            }
            else{
                printf("A resposta está errada\n");

                //o progama chama uma função que gera uma frase motivacional
                incorreto();
            }
        }

    }
    if(*op==2){
        printf("******************Subtração******************\n");
        // sistema de repetição para que o progama gere 10 perguntas
        for(int i=0; i<10; i++){
            // geração dos números aleatórios
            srand(time(NULL));
            a=rand() % *n;
            b=rand() % *n;
            
            // o progama faz a pergunta ao usúario e recebe a resposta
            printf("Quanto é %d menos %d ?\n", a,b);
            scanf("%f",&r);
            printf("\n");

            //teste da resposta
            if(r==a-b){
                printf("A resposta está correta!\n");
                 // após a confirmação da resposta, o progama soma um ponto na variavel 'c' que serve para porcentagem de acertos
                *c=*c+1;

                //o progama chama uma função que gera uma frase motivacional
                correto();
                
            }
            else{
                printf("A resposta está errada\n");

                //o progama chama uma função que gera uma frase motivacional
                incorreto();
            }

        }
    }
    if(*op==3){
        printf("******************Multiplicação******************\n");
        // sistema de repetição para que o progama gere 10 perguntas
        srand(time(NULL));
        for(int i=0; i<10; i++){
            // geração dos números aleatórios
            a=rand() % *n;
            b=rand() % *n;
            
            // o progama faz a pergunta ao usúario e recebe a resposta
            printf("Quanto é %d multiplicado por %d ?\n", a,b);
            scanf("%f",&r);
            printf("\n");


            //teste da resposta
            if(r==a*b){
                printf("A resposta está correta!\n");
                // após a confirmação da resposta, o progama soma um ponto na variavel 'c' que serve para porcentagem de acertos
                *c=*c+1;

                //o progama chama uma função que gera uma frase motivacional
                correto();
            }
            else{
                printf("A resposta está errada\n");

                //o progama chama uma função que gera uma frase motivacional
                incorreto();
                
            }
        }
    }
    if(*op==4){
        printf("******************Divisão******************\n");
        // sistema de repetição para que o progama gere 10 perguntas
        for(int i=0; i<10; i++){
            // geração dos números aleatórios
            srand(time(NULL));
            a=rand() % *n;
            b=0;

            // o "while" serve para que o divisor nunca seja igual a zero
            while(b==0){
                b=rand() % *n; 
            }
            // o progama faz a pergunta ao usúario e recebe a resposta
            printf("Quanto é %d dividido por %d ?\n", a,b);
            // o progama avisa ao usúario de que deve-se responder apenas com números inteiros
            printf("Ignore a sobra da divisão, responda somente com o número inteiro!\n");
            scanf("%f",&r);
            printf("\n");
            //teste da resposta
            if(r==a/b){
                printf("A resposta está correta! \n");
                 // após a confirmação da resposta, o progama soma um ponto na variavel 'c' que serve para porcentagem de acertos
                *c=*c+1;

                //o progama chama uma função que gera uma frase motivacional
                correto();
            }
            else{
                printf("A resposta está errada \n");

                //o progama chama uma função que gera uma frase motivacional
                incorreto();
                
            }
    }
    }
    if(*op==5){
        // neste caso foi criada uma função especial para a opção de perguntas mistas
        // o "if" chama essa função
        op5_mista(&*n,&*op,&*c);
    }
}

void op5_mista(int *n, int *op, int *c){
    printf("******************Mistura Aleatória******************\n");
    // sistema de repetição para que o progama gere 10 perguntas
    for (int i = 0; i < 10; i++){
        // criação de variaveis que serão usadadas nessa função
        int v, a, b;
        float r;

        // geração de um número aleatório para variável 'v' para cada pergunta
        srand(time(NULL));  
        v=rand() % 4;
        // a variável 'v' serve para que o sistema escolha qual operação será feita

        if(v==0){
            printf("-------Adição-------\n");
            // geração dos números aleatórios
            srand(time(NULL));
            a=rand() % *n;
            b=rand() % *n;
        
            
            // o progama faz a pergunta ao usúario e recebe a resposta
            printf("Quanto é %d mais %d ?\n", a,b);
            scanf("%f",&r);
            printf("\n");

            //teste da resposta
            if(r==a+b){
                printf("A resposta está correta!\n");
                // após a confirmação da resposta, o progama soma um ponto na variavel 'c' que serve para porcentagem de acertos
                *c=*c+1;

                //o progama chama uma função que gera uma frase motivacional
                correto();
            }
            else{
                printf("A resposta está errada\n");

                //o progama chama uma função que gera uma frase motivacional
                incorreto();
            }
        }
        else if(v==1){
            printf("-------Subtração-------\n");
            // geração dos números aleatórios
            srand(time(NULL));
            a=rand() % *n;
            b=rand() % *n;


            // o progama faz a pergunta ao usúario e recebe a resposta  
            printf("Quanto é %d menos %d ?\n", a,b);
            scanf("%f",&r);
            printf("\n");

                //teste da resposta
            if(r==a-b){
                printf("A resposta está correta!\n");
                // após a confirmação da resposta, o progama soma um ponto na variavel 'c' que serve para porcentagem de acertos
                *c=*c+1;

                //o progama chama uma função que gera uma frase motivacional
                correto();
                }
            else{
                printf("A resposta está errada\n");

                //o progama chama uma função que gera uma frase motivacional
                incorreto();
                }
        }
        else if(v==2){
            printf("-------Multiplicação-------\n");
            // geração dos números aleatórios
            srand(time(NULL));
            a=rand() % *n;
            b=rand() % *n;
            

            // o progama faz a pergunta ao usúario e recebe a resposta
            printf("Quanto é %d multiplicado por %d ?\n", a,b);
            scanf("%f",&r);
            printf("\n");

            //teste da resposta
            if(r==a*b){
                printf("A resposta está correta!\n");
                // após a confirmação da resposta, o progama soma um ponto na variavel 'c' que serve para porcentagem de acertos
                *c=*c+1;

                //o progama chama uma função que gera uma frase motivacional
                correto();
            }
            else{
                printf("A resposta está errada\n");

                //o progama chama uma função que gera uma frase motivacional
                incorreto();
            }
        }
        else if(v==3){
            printf("-------Divisão-------\n");
            // geração dos números aleatórios
            srand(time(NULL));
            a=rand() % *n;
            b=rand() % *n;

            // o "while" serve para que o divisor nunca seja igual a zero
            while(b<0){
                b=rand() % *n; 
            }

            // o progama faz a pergunta ao usúario e recebe a resposta
            printf("Quanto é %d dividido por %d ?\n", a,b);
            // o progama avisa ao usúario de que deve-se responder apenas com números inteiros
            printf("Ignore a sobra da divisão, responda somente com o número inteiro!\n");
            scanf("%f",&r);
            printf("\n");
            //teste da resposta
            if(r==a/b){
                printf("A resposta está correta! \n");
                // após a confirmação da resposta, o progama soma um ponto na variavel 'c' que serve para porcentagem de acertos
                *c=*c+1;

                //o progama chama uma função que gera uma frase motivacional
                correto();
            }
            else{
                printf("A resposta está errada \n");

                //o progama chama uma função que gera uma frase motivacional
                incorreto(); 
            }
        }    
    }
}

void correto(void){
    // printa uma frase motivacional quando a resposta está certa
    int t;
    // cria uma variável 't' para que o progama gere uma frase motivacional de forma aleatória
    srand(time(NULL));  
    t=rand() % 4;
    // atribui um valor aleatório para variável 't'

    if(t==0){
        printf("Uau, mandou bem! \n \n");
    }
    else if(t==1){
        printf("Excelente! \n \n");
    }
    else if(t==2){
        printf("É isso ai, bom trabalho! \n \n");
    }
    else if(t==3){
        printf("Mantenha o ritmo! \n \n");
    }
    else
        printf("ERRO \n \n");


}

void incorreto(void){
    // printa uma frase motivacional quando a resposta está errada
    int t;
    // cria uma variável 't' para que o progama gere uma frase motivacional de forma aleatória
    srand(time(NULL));  
    t=rand() % 4;
    // atribui um valor aleatório para variável 't'
    srand(time(NULL));
    t=rand() % 4;

    if(t==0){
        printf("Hmmmm... Isso não ta certo, tenta denovo. \n \n");
    }
    else if(t==1){
        printf("Ta errado, mas não desanima, tente mais uma vez. \n \n");
    }
    else if(t==2){
        printf("Não desista, uma hora vai! \n \n");
    }
    else if(t==3){
        printf("Não foi dessa vez, mas continue tentando! \n \n");
    }
    else
        printf("ERRO \n \n");

}

int final(int *c){
    // criação da variável que será usada nessa função
    int f;

    // atribui um valor para variável 'f' de acordo com a quantidade de acertos definida pelo ponteiro '*c'
    f=(*c)*10;

    // faz a comparação do valor de 'f' para retornar ao usúario o percentual final e a indicação do que fazer a seguir
    if(f>=75){
        printf("Você obteve um percentual de: %d %% \n",f);
        printf("Parabéns, você está pronto para ir para o próximo nível! \n");
    }
    else if(f<=75){
        printf("Você obteve um percentual de: %d %% \n",f);
        printf("Peça ajuda extra ao seu professor \n");
    }

    printf("\n");
    printf("\n");
    printf("\n");

    // pergunta ao usúario se ele deseja reiniciar o progama ou ecerralo 
    printf("Digite 1 para voltar ao menu ou 0 para encerrar o progama \n");
    int r;
    // cria uma variável 'r' e recebe um valor para ela
    scanf("%d",&r);

    // faz a comparação do valor de 'f' para indentificar como o progama deve prosseguir 
    if(r==1){
        return main();    
    }
    if (r==0){
        return 0;
    }
    return 0;
}