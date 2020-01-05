#include <stdio.h>
int main(){
int n, i = 2;
	scanf("%d",&n);
	for ( ; i <= n; i += 2 )
		printf("%d^2 = %d\n",i,i * i);

	return 0;
}
