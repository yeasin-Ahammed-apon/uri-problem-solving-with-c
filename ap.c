#include<stdio.h>
int main()
{
    int a,c,b,d;
    scanf("%d%d%d%d",&a,&c,&b,&d);
    if(a>b){
        a=(24-a);
        b=a+b;
        if(c>d){
          c=(60-c);
            d=c+d;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",b,d);
        }else if(d>c){
            d=d-c;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",b,d);
        }
    }else if(b>a){
    b=b-a;
    if(c>d){
          c=(60-c);
            d=c+d;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",b,d);
        }else if(d>c){
            d=d-c;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",b,d);
        }
    }else{
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",24,0);
    }
return 0;
}
