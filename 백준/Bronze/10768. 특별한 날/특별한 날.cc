#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	a*=100;
	a+=b;
	if(a==218) printf("Special");
	if(a<218) printf("Before");
	if(a>218) printf("After");
}