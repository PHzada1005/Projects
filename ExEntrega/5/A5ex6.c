#include <stdio.h>
#include <stdlib.h>

int main (void){
 int vet[5], i;
 int *Endvet;
 Endvet = vet;
 
 for(i = 0; i < 5; i++){
     printf("%d: ",i+1);
     scanf("%d", &vet[i]);
 }

 
for(i = 0; i < 5; i++){
     printf("%i : %i : %i\n",i+1, vet[i], Endvet++);
 } 
 Endvet = vet;
 
for(i = 0; i < 5; i++){
    if(vet[i] %2 == 0){
        printf("\nNumero %d eh par : Posicao = %d",vet[i], Endvet);
  }
  Endvet++;
 }
 
return 0;

}
