#include <stdio.h>
int main(){
    int i, odd = 0,even = 0, pos = 0, neg = 0, num;
	for ( i = 0; i < 5; i++ )	{
		scanf("%d",&num);
		if ( num % 2 == 0 ){even++;}
		else {odd++;}
		if ( num > 0 ) pos++;
		if ( num < 0 ) neg++;
	}
	printf("%d valor(es) par(es)\n",even);
	printf("%d valor(es) impar(es)\n",odd);
	printf("%d valor(es) positivo(s)\n",pos);
    printf("%d valor(es) negativo(s)\n",neg);
	return 0;
}
