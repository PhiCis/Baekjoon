#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;

ll power(ll a, ll b)
{
	ll ret=1;
	while(b)
	{
		if(b&1) ret=ret*a%mod;
		a=a*a%mod;
		b>>=1;
	}
	return ret;
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		ll r, g, b, k;
		scanf("%lld%lld%lld%lld", &r, &g, &b, &k);
		printf("%lld\n", ((g+b)*k%mod*power(b+1, k)%mod+b*r%mod*((power(b+1, k)+(mod-1)*power(b, k))%mod)%mod)%mod*power(b, mod-2)%mod*power(power(b+1, k), mod-2)%mod);
	}
}