#include<stdio.h>
int n, i, j;
int main()
{
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++) printf("*");
		printf("\n");
	}
	for(i=n-1;i>0;i--){
		for(j=1;j<=i;j++) printf("*");
		printf("\n");
	}
	return 0;
}