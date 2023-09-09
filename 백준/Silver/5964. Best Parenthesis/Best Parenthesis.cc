#include<bits/stdc++.h>
using namespace std;
#define mod 12345678910LL

long long n, a[101010], c, ans;
long long pow(long long b)
{
	if(b==0) return 1;
	long long tmp = pow(b/2);
	if(b&1) return (long long)((__int128_t)tmp*tmp*2%mod);
	else return (long long)((__int128_t)tmp*tmp%mod);
}

int main()
{
	scanf("%lld", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld", &a[i]);
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]==0) c++;
		if(a[i]==1)
		{
			c--;
			if(a[i-1]==0)
			{
				ans+=pow(c);
				ans%=mod;
			}
		} 
	}
	printf("%lld", ans);
} 