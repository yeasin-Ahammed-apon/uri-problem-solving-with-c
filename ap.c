#include<stdio.h>
int main(){
int d1,h1,m1,s1,d2,h2,m2,s2,rd,rh,rm,rs;
scanf("%d%d%d%d%d%d%d%d",&d1,&h1,&m1,&s1,&d2,&h2,&m2,&s2);
rd=d2-d1;
rh=(24-h1)+h2;
rm=(60-m1)+m2;
rs=(60-s1)+s1;
rd=(rd-1)*24*60*60;
rh=rh*60*60;
rm=rm*60;
rs;
rs=rs+rd+rh+rm;
rd=rs/86400;
rs=rs%86400;
rh=rs/3600;
rs=rs%3600;
rm=rs/60;
rs=rs%60;
printf("%d dia(s)\n",rd);
printf("%d hora(s)\n",rh);
printf("%d minuto(s)\n",rm);
printf("%d segundo(s)\n",rs);
return 0;
}
