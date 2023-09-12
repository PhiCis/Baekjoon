#include<stdio.h>
int n, i, j;
int main()
{
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		for(j=1;j<=(n+1)/2;j++) printf("* ");
		printf("\n");
		for(j=1;j<=n/2;j++) printf(" *");
		printf("\n");
	}
}