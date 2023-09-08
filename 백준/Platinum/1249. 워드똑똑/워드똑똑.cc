#include<bits/stdc++.h>
using namespace std;
#define mod 1234567891ll
typedef long long ll;


ll power(ll a, ll b)
{
	if(b==0) return 1;
	ll tmp=power(a, b/2);
	if(b&1) return tmp*tmp%mod*a%mod;
	else return tmp*tmp%mod;
}

ll c[27][27];

int main()
{
	for(int i=0;i<=26;i++)
	{
		c[i][0]=c[i][i]=1;
	}
	for(int i=1;i<=26;i++)
	{
		for(int j=1;j<i;j++)
		{
			c[i][j]=c[i-1][j-1]+c[i-1][j];
		}
	}
	
	ll n, k;
	ll ans=0;
	cin>>n>>k;
	if(n&1)
	{
		n/=2;
		for(int i=1;i<=k;i++)
		{
			ll tmp = 0;
			for(int j=0;j<=k-i;j++)
			{
				if(j&1) tmp-=c[26-i][j];
				else tmp+=c[26-i][j];
			}
			if(i == 1) ans += (2 * n + 1) * c[26][i] % mod * (tmp + mod) % mod ;
			else ans += 2 * c[26][i] % mod * i % mod * (power(i, n) - 1 + mod) % mod * power(i - 1, mod - 2) % mod * (tmp + mod) % mod + c[26][i] * power(i, n + 1) % mod * (tmp + mod) % mod;
			ans %= mod;
		}
		cout<<ans;
	}
	else
	{
		n/=2;
		for(int i=1;i<=k;i++)
		{
			ll tmp = 0;
			for(int j=0;j<=k-i;j++)
			{
				if(j&1) tmp-=c[26-i][j];
				else tmp+=c[26-i][j];
			}
			if(i == 1) ans += 2 * c[26][i] % mod * n % mod * (tmp + mod) % mod;
			else ans += 2 * c[26][i] % mod * i % mod * (power(i, n) - 1 + mod) % mod * power(i - 1, mod - 2) % mod * (tmp + mod) % mod;
			ans %= mod;
		}
		cout<<ans;
	}
}