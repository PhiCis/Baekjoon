#include<stdio.h>
int n, i, j;
int main()
{
	scanf("%d", &n);
	for(j=1;j<=n-1;j++){
		printf(" ");
	}
	printf("*\n");
	for(i=2;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		printf("*");
		for(j=1;j<=2*i-3;j++){
			printf(" ");
		}
		printf("*\n");
	}
}
