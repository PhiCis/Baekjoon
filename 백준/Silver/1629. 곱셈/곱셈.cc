#include<stdio.h>
long long a, b, c, ans=1;
int main()
{
	scanf("%lld%lld%lld", &a, &b, &c);
	while(b)
	{
		if(b&1)
		{
			ans*=a;
			ans%=c;
		}
		a*=a;
		a%=c;
		b>>=1;
	}
	printf("%lld", ans);
}