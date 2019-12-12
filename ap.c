#include<stdio.h>
int main(){
int n,h;
scanf("%d",&n);
h=n/365;
printf("%d ano(s)\n",h);
n=n%365;
h=n/30;
printf("%d mes(es)\n",h);
n=n%30;
printf("%d dia(s)\n",n);
//1020
return 0;
}
