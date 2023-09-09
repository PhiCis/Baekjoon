#include<stdio.h>
int a, b, c;
int main()
{
	scanf("%d %d %d", &a, &b, &c);
	a-=11;b-=11;c-=11;
	printf("%d", a*1440+b*60+c>=0?a*1440+b*60+c:-1);
}