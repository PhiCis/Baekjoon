#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, a[100010];
ll ans = 9e18;

int main()
{
	scanf("%lld", &n);
	for(ll i=0;i<n;i++)
	{
		scanf("%lld", &a[i]);
	}
	ll s = 1, e = 1000000000;
	while(s<=e)
	{
		ll m1 = (s*2+e)/3;
		ll m2 = (s+e*2)/3;
		ll d1 = 0;
		ll d2 = 0;
		for(ll i=0;i<n;i++)
		{
			d1+=abs(m1*i-a[i]);
		}
		for(ll i=0;i<n;i++)
		{
			d2+=abs(m2*i-a[i]);
		}
		ans = min(ans, min(d1, d2));
		if(d1<d2)
		{
			e = m2-1;
		}
		else
		{
			s = m1+1;
		}
	}
	printf("%lld", ans);
}