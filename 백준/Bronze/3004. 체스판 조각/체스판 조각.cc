#include<stdio.h>
int n;
int main()
{
	scanf("%d", &n);
	if(n&1){
		printf("%d", (n/2+2)*(n/2+1));
	}
	else{
		printf("%d", (n/2+1)*(n/2+1));
	}
}