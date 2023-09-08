#include<stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if(b>=c) printf("-1");
	else{
		c-=b;
		printf("%d", a/c+1);
	}
}