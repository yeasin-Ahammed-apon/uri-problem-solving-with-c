#include<stdio.h>
int main(){
int n,h;
scanf("%d",&n);
h=n/3600;
printf("%d:",h);
n=n%3600;
h=n/60;
printf("%d:",h);
n=n%60;
printf("%d\n",n);
//1019
return 0;
}
