#include<stdio.h>
double a, b, t;
double ans;
int main()
{
	scanf("%lf%lf", &a, &b);
	if(a<b)
	{
		t=a;a=b;b=t;
	}
	if(a/3>b) printf("%lf", b);
	else printf("%lf", a/3>b/2?a/3:b/2);
}