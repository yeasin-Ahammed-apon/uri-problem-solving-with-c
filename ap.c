#include<stdio.h>
#include<math.h>
int main(){
double x1,y1,x2,y2,a,b;
scanf("%lf%lf",&x1,&y1);
scanf("%lf%lf",&x2,&y2);
a=x2-x1;
b=y2-y1;
printf("%.4lf\n",sqrt((a*a)+(b*b)));
return 0;
}
