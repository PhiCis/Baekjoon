#include<stdio.h>
int main()
{
	int a, b, w, h;
	scanf("%d%d%d%d", &a, &b, &w, &h);
	printf("%d", (2*a>=w?w-a:a)<(2*b>=h?h-b:b)?(2*a>=w?w-a:a):(2*b>=h?h-b:b));
}