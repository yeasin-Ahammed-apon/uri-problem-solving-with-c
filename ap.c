#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b){
        a=(24-a);
        b=a+b;
        printf("O JOGO DUROU %d HORA(S)\n",b);
    }else if(b>a){
    b=b-a;
    printf("O JOGO DUROU %d HORA(S)\n",b);
    }else{
    printf("O JOGO DUROU %d HORA(S)\n",24);
    }

}
