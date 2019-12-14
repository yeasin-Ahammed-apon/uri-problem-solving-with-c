#include<stdio.h>
int main(){
float A,B,C,p,t;
scanf("%f%f%f",&A,&B,&C);
if(A+B>C&&B+C>A&&A+C>B){
        p=A+B+C;
    printf("Perimetro = %.1f\n",p);
}else{
    t=0.5*(A+B)*C;
printf("Area = %.1f\n",t);
}
return 0;
}
