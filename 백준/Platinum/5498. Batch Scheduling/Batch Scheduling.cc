#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll dp[10010], t[10010], f[10010], st[10010], sf[10010], n, s;
ll ans;

int main()
{
	scanf("%lld%lld", &n, &s);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld%lld", &t[i], &f[i]);
		st[i]=st[i-1]+t[i];
		sf[i]=sf[i-1]+f[i];
		dp[i]=9e18;
	}
	for(int i=n;i>=1;i--)
	{
		for(int j=n;j>=i;j--)
		{
			dp[i] = min(dp[i], dp[j+1] + (s+st[j]-st[i-1])*(sf[n]-sf[i-1]));
		}
	}
	printf("%lld", dp[1]);
}