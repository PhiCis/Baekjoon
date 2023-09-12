#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
ll m, a[10010], b[10010], A=1, c[10010], ans;

ll power(ll a, ll b)
{
	ll ans=1;
	while(b)
	{
		if(b&1) ans=ans*a%MOD;
		a=a*a%MOD;
		b>>=1;
	}
	return ans;
}

int main()
{
	scanf("%lld", &m);
	for(int i=1;i<=m;i++)
	{
		scanf("%lld%lld", &a[i], &b[i]);
		A=A*a[i]%MOD;
	}
	for(int i=1;i<=m;i++)
	{
		c[i]=A*power(a[i], MOD-2)%MOD;
		ans=(ans+b[i]*c[i])%MOD;
	}
	ans=ans*power(A, MOD-2)%MOD;
	printf("%d", ans);
}