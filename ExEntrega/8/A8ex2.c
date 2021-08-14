#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    puts("Digite uma frase:");
    fgets(s,100,stdin);
    int i=0;
    while(1){
        if(s[i]== '\n')
            break;
        else if(s[i] == ' ')
             printf("%c", s[i]);
        else
            printf("%c", s[i]-32);
        i++;
    
    }
    
    // o while vai substituir essa função "puts(strupr(s))";

    return 0;
}