#include<stdio.h>
int n, i, j;
int main()
{
	scanf("%d", &n);
	for(i=0;i<n;i++){
		for(j=0;j<i;j++) printf(" ");
		for(j=0;j<2*n-1-2*i;j++) printf("*");
		printf("\n");
	}
	for(i=n-2;i>=0;i--){
		for(j=0;j<i;j++) printf(" ");
		for(j=0;j<2*n-1-2*i;j++) printf("*");
		printf("\n");
	}
}