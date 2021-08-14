#include "ordena.h"


void ordena_vetor(int vetor[TAM]){
    int ord;
    for(int j=0; j<=TAM; j++){ 
        for(int i=0; i<TAM-1; i++){ 
            if(vetor[i] > vetor[i+1]){ 
                ord=vetor[i]; 
                vetor[i]=vetor[i+1]; 
                vetor[i+1]=ord; 
            } 
        } 
    }
}