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
long long n, ans, i, t;
int main()
{
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld", &n);
		if(n&1)
		{
			printf("0\n");
			continue;
		}
		n/=2;
		ans=1;
		for(i=0;i<n-1;i++)
		{
			ans*=(2*n-i);
			ans%=1000000007;
		}
		for(i=1;i<=n;i++)
		{
			ans*=pow(i, 1000000005);
			ans%=1000000007;
		}
		printf("%lld\n", ans);	
	}
}