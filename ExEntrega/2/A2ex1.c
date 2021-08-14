 #include <stdio.h>

 int main (void){
     int n, cont = 0, somatoria = 0;
     while(1){
         printf("Digite um número:\n");
         scanf("%d", &n);
         cont++;
         if(n==0){
             break;
         }
         somatoria = somatoria + n;
     }
     printf("Você digitou %d números\n", cont);
     printf("A somatória dos números é %d\n", somatoria);
     printf("Média = %d", somatoria/(cont-1));
     return 0;
 }