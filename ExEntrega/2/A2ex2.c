#include <stdio.h>

 int main (void){
     int idade;
     float total =0;
     while(1){
         printf("Digite a idade do visitante:\n");
         scanf("%d", &idade);
         if(idade==0){
             break;
         }
         if(idade<=2){
            total = total + 0;
         }
         else if(idade<=12){
             total = total + 14.00;
         }
         else if(idade<65){
             total = total + 23.00;
         }
         else if(idade>=65){
             total = total + 18.00;
         }
         else{
             total = total + 0;
         }
     }
    printf("O Valor do grupo é %.2f", total);
    return 0;
 }
