#include<stdio.h>
int main(){
    float a,b;
    scanf("%f",&a);
    if(0<=a&&a<=400.00){

        b=a*0.15;
        a=a+b;
        printf("Novo salario: %.2f\n",a);
        printf("Reajuste ganho: %.2f\n",b);
        printf("Em percentual: 15 %%\n");
    }else if(400.01<=a&&a<=800.00){
        b=a*0.12;
        a=a+b;
        printf("Novo salario: %.2f\n",a);
        printf("Reajuste ganho: %.2f\n",b);
        printf("Em percentual: 12 %%\n");
    }else if(800.01<=a&&a<=1200.00){
        b=a*0.1;
        a=a+b;
        printf("Novo salario: %.2f\n",a);
        printf("Reajuste ganho: %.2f\n",b);
        printf("Em percentual: 10 %%\n");
    }else if(1200.01<=a&&a<=2000.00){
        b=a*0.07;
        a=a+b;
        printf("Novo salario: %.2f\n",a);
        printf("Reajuste ganho: %.2f\n",b);
        printf("Em percentual: 7 %%\n");
    }else if(2000.00<=a){
       b=a*0.04;
        a=a+b;
        printf("Novo salario: %.2f\n",a);
        printf("Reajuste ganho: %.2f\n",b);
        printf("Em percentual: 4 %%\n");
    }
return 0;
}
