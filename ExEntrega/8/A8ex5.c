#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    puts("Digite uma palavra ou enter para sair:");
    fgets(s,100,stdin);
    while(1){
        for (int i=0; i<strlen(s); i++){
            if(s[i] == 'B')
                printf("%c", s[i]);
            
            //strcmp string de comparação
            else if(strcmp (s,"\n") == 0)
                break;
            i++;
        
        }
    }
    return 0;
}