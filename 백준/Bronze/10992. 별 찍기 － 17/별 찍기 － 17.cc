#include<stdio.h>
int main()
{
	int n, i, j;
	scanf("%d", &n);
	for(i=1;i<=n-1;i++){
		printf(" ");
	}
	printf("*\n");
	for(i=1;i<=n-2;i++){
		for(j=1;j<=n-1-i;j++){
			printf(" ");
		}
		printf("*");
		for(j=1;j<=2*i-1;j++){
			printf(" ");
		}
		printf("*\n");
	}
	if(n>1)
	for(i=1;i<=2*n-1;i++){
		printf("*");
	}
}