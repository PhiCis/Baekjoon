#include<stdio.h>
int n, c[11], i, j;
int main()
{
	scanf("%d", &n);
	while(n>0){
		c[n%10]++;
		n/=10;
	}
	for(i=9;i>=0;i--){
		for(j=0;j<c[i];j++){
			printf("%d", i);
		}
	}
}