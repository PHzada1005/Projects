#include "placa.h"
#include <string.h>


char letras[] = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","x","y","z"};

int letra(){
  int l[3];
    for(int i=0; i<3; i++){
        letras[i]=rand()%26;
    }

    return l[3];
}