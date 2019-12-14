#include<stdio.h>
int main(){
int a,b,c,f,s,t;
scanf("%d%d%d",&a,&b,&c);
if(a<b&&a<c){f=a;if(b<c){s=b; t=c;}else{s=c; t=b;}}
else if(b<a&&b<c){f=b;if(a<c){s=a; t=c;}else{s=c; t=a;}}
else if(c<a&&c<b){f=c;if(b<a){s=b; t=a;}else{s=a; t=b;}}
printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",f,s,t,a,b,c);
return 0;
}
