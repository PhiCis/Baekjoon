#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;
ll n, k, dp[60][60], ans;
ll power(ll a, ll b)
{
	ll tmp=1;
	while(b)
	{
		if(b&1) tmp=(tmp*a)%MOD;
		a=(a*a)%MOD;
		b>>=1;
	}
	return tmp;
}
ll comb(ll a, ll b)
{
	ll tmp=1;
	for(int i=1;i<=b;i++)
	{
		tmp=(tmp*(a+1-i))%MOD;
		tmp=(tmp*power(i, MOD-2))%MOD;
	}
	return tmp;
}
int main()
{
	scanf("%lld%lld", &n, &k);
	dp[0][1]=1ll;
	for(int i=1;i<=k;i++)
	{
		for(int j=1;j<=i+1;j++)
		{
			dp[i][j]=(dp[i][j]+comb(i+1, j))%MOD;
		}
		for(int j=0;j<i;j++)
		{
			for(int l=0;l<=j+1;l++)
			{
				dp[i][l]=(dp[i][l]+(((MOD-1)*dp[j][l])%MOD)*comb(i+1, j))%MOD;
			}
		}
		for(int j=0;j<=i+1;j++)
		{
			dp[i][j]=dp[i][j]*power(i+1, MOD-2)%MOD;
		}
	}
	
	
	
	for(int i=0;i<=k+1;i++)
	{
		ans=(ans+dp[k][i]*power(n, i))%MOD;
	}
	printf("%lld", ans);
}