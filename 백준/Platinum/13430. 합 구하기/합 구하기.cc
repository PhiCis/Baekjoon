#include<stdio.h>
long long pow(long long a, long long b)
{
	long long ans=1;
	while(b)
	{
		if(b&1)
		{
			ans*=a;
			ans%=1000000007;
		}
		a*=a;
		a%=1000000007;
		b>>=1;
	}
	return ans;
}
long long k, n, ans, i;
int main()
{
	scanf("%lld %lld", &k, &n);
	ans=1;
	for(i=0;i<k+1;i++)
	{
		ans*=(k+n)-i;
		ans%=1000000007;
	}
	for(i=1;i<=k+1;i++)
	{
		ans*=pow(i, 1000000005);
		ans%=1000000007;
	}
	printf("%lld", ans);
}