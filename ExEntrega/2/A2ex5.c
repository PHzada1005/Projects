#include <stdio.h>
int main(){
    int N,k, a=0,b=1,c=0;
    printf("Digite um número:\n");
    scanf("%d", &N);
    for(k=1; k<N; k++)
    {
        if(k%2==1)
        {
            printf("%d ",c);
            c=a+b;
            a=c;
        }
        else if(k==2)
            printf("%d ",c);
        else if(k%2==0)
        {
            printf("%d ",c);
            c=a+b;
            b=c;
        }
    }
    printf("%d\n",c);
    return 0;
}