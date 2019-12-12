#include<stdio.h>
//1018
int main(){
int m,n,i=0,k;
int a[7]={100,50,20,10,5,2,1};
scanf("%d",&k);
printf("%d\n",k);
while( i<7){
        m=k/a[i];
        n=k%a[i];
        k=n;
        printf("%d nota(s) de R$ %d,00\n",m,a[i]);
}

return 0;
}
