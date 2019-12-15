#include<stdio.h>
int main()
{
    double A,B,C,f,s,t;
    scanf("%lf%lf%lf",&A,&B,&C);
         if(A>C&&A>B){f=A;if(B>C){s=B;t=C;}else if(C>B){s=C; t=B;}else if(C==B){s=C; t=B;}}
    else if(B>A&&B>C){f=B;if(A>C){s=A;t=C;}else if(C>A){s=C; t=A;}else if(C==A){s=C; t=A;}}
    else if(C>A&&C>B){f=C;if(A>B){s=A;t=B;}else if(B>A){s=B; t=A;}else if(B==A){s=B; t=A;}}
    else if(A==B&&B==C){f=A;s=B;t=C;}
    A=f;
    B=s;
    C=t;
    printf("%lf\n%lf\n%lf\n",A,B,C);
  if(A>=B+C){printf("NAO FORMA TRIANGULO\n");}
    if((A*A)==(B*B)+(C*C)){printf("TRIANGULO RETANGULO\n");}
    if(A>B+C){printf("TRIANGULO OBTUSANGULO\n");}
    if(A<B+C){printf("TRIANGULO ACUTANGULO\n");}
    if(A==B&&B==C){printf("TRIANGULO EQUILATERO\n");}
    if(A==B||B==C||A==C){printf("TRIANGULO ISOSCELES\n");}
    return 0;
}
