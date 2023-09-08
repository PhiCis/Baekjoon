#include<stdio.h>
int n;
int main()
{
	scanf("%d", &n);
	if(n==1||n==2||n==4||n==7) printf("-1");
	else{
		while(n%5) n+=2;
		printf("%d", n/5);
	}
}