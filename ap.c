#include <stdio.h>
int main(){
	int n, i;
	scanf("%d",&n);
	n = ( n % 2 ) ? n : n + 1;
	for ( i = n; i <= n + 10; i += 2 )
		printf("%d\n",i);
	return 0;
}
