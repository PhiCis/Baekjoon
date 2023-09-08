#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n;
	scanf("%lld", &n);
	long long s=0, e=4000000000;
	long long ans=9e18;
	while(s<=e)
	{
		long long m=s+e>>1;
		if((__int128_t)m*m>=(__int128_t)n)
		{
			ans=min(ans, m);
			e=m-1;
		}
		else
		{
			s=m+1;
		}
	}
	if(ans==9e18)
	{
		printf("2147483648");
	}
	else
	{
		printf("%lld", ans);
	}
}