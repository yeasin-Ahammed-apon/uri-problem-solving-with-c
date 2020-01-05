#include <stdio.h>
int main(){
int n, i, num;
	scanf("%d",&n);
	for ( i = 0; i < n; i++ ){
		scanf("%d",&num);
		if ( num == 0 ){
			printf("NULL\n");
		}else{
			if( num % 2 ){
			    printf("ODD");
				}else{
                printf("EVEN");
			}
			if ( num > 0 ){
                printf(" POSITIVE\n");
			}else{
                printf(" NEGATIVE\n");
			}
		}
	}
    return 0;
}
