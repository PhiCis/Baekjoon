#include<stdio.h>
int n, i;
long long a, b, t;
int main()
{
	a=0;b=1;
	scanf("%d", &n);
	for(i=1;i<n;i++){
		t=a+b;
		a=b;
		b=t;
	}
	printf("%lld", b);
}