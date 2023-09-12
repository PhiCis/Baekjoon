#include<stdio.h>
long long pow(long long a, long long b)
{
	long long ans=1;
	while(b)
	{
		if(b&1)
		{
			ans*=a;
			ans%=10007;
		}
		a*=a;
		a%=10007;
		b>>=1;
	}
	return ans;
}
long long k, n, ans, i;
int main()
{
	scanf("%lld %lld", &n, &k);
	ans=1;
	for(i=0;i<k;i++)
	{
		ans*=(n-i);
		ans%=10007;
	}
	for(i=1;i<=k;i++)
	{
		ans*=pow(i, 10005);
		ans%=10007;
	}
	printf("%lld", ans);
}