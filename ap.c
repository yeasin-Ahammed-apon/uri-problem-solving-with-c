#include<stdio.h>
int main(){
double x,y;
scanf("%lf%lf",&x,&y);
if(x==0){
printf("Eixo X\n");
}else if ( y == 0 ){
printf( "Eixo Y\n" );
}if(x>0&&y>0){
printf("Q1\n");
}else if(x<0&&y>0){
printf("Q2\n");
}else if(x<0&&y<0){
printf("Q3\n");
}else if(x>0&&y<0){
printf("Q4\n");
}else if(x=y=0){
printf("Origem\n");
}
return 0;
}
