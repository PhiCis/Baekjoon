#include<stdio.h>
int n, i;
int main()
{
	scanf("%d", &n);
	while(n>0){
		if(n&1) i++;
		n/=2;
	}
	printf("%d", i);
}