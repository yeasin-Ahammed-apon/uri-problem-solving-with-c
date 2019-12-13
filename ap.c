#include<stdio.h>
int main(){
int X,Y;
float l;
scanf("%d%d",&X,&Y);
if(X==1){
        l=Y*4.00;
    printf("Total: R$ %.2f\n",l);
}else if(X==2){
l=Y*4.50;
    printf("Total: R$ %.2f\n",l);
}
else if(X==3){
l=Y*5.00;
    printf("Total: R$ %.2f\n",l);
}
else if(X==4){
l=Y*2.00;
    printf("Total: R$ %.2f\n",l);
}
else if(X==5){
l=Y*1.50;
    printf("Total: R$ %.2f\n",l);
}
return 0;
}
