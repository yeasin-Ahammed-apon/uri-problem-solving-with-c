#include <stdio.h>
int main()
{
    //1012
 float tri,cir,trap,quad,ret,A,B,C;
 scanf("%f%f%f",&A,&B,&C);
 tri=0.5*(A*C);
 cir=3.14159*(C*C);
 trap=0.5*(A+B)*C;
 quad=(B*B);
 ret=(A*B);
 printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n",tri,cir,trap,quad,ret);
 return 0;
}
