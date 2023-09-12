#include<stdio.h>
int main()
{
	long long a, b, c;
	scanf("%lld%lld%lld", &a, &b, &c);
	printf("%lld", ((a+c-1)/c)*((b+c-1)/c));
}