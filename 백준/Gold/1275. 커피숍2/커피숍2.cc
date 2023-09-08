#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll T[400040];

void update(ll id, ll s, ll e, ll t, ll v)
{
	if(s>t||e<t) return;
	if(s==e)
	{
		T[id]=v;
		return;
	}	
	ll m=s+e>>1;
	update(id*2, s, m, t, v);
	update(id*2+1, m+1, e, t, v);
	T[id]=T[id*2]+T[id*2+1];
	return;
}

ll sum(ll id, ll s, ll e, ll l, ll r)
{
	if(e<l||r<s) return 0;
	if(l<=s&&e<=r) return T[id];
	ll m=s+e>>1;
	return sum(id*2, s, m, l, r)+sum(id*2+1, m+1, e, l, r);
}
ll n, q;
int main()
{
	scanf("%lld%lld", &n, &q);
	for(int i=1;i<=n;i++)
	{
		ll a;
		scanf("%lld", &a);
		update(1, 1, n, i, a);
	}
	for(int i=1;i<=q;i++)
	{
		ll x, y;
		scanf("%lld%lld", &x, &y);
		if(x>y) swap(x, y);
		printf("%lld\n", sum(1, 1, n, x, y));
		scanf("%lld%lld", &x, &y);
		update(1, 1, n, x, y);
	}
}