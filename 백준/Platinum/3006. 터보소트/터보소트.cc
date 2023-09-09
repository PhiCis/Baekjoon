#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, a[100010];
ll T[400040];

void upd(ll id, ll s, ll e, ll t, ll v)
{
	if(s>t||e<t) return;
	if(s==e)
	{
		T[id]=v;
		return;
	}
	ll m=s+e>>1;
	upd(id*2, s, m, t, v);
	upd(id*2+1, m+1, e, t, v);
	T[id]=T[id*2]+T[id*2+1];
	return;
}

ll query(ll id, ll s, ll e, ll l, ll r)
{
	if(s>e) return 0;
	if(e<l||r<s) return 0;
	if(l<=s&&e<=r) return T[id];
	ll m=s+e>>1;
	return query(id*2, s, m, l, r)+query(id*2+1, m+1, e, l, r);
}

int main()
{
	scanf("%lld", &n);
	for(ll i=1;i<=n;i++)
	{
		ll s;
		scanf("%lld", &s);
		a[s]=i;
		upd(1, 1, n, i, 1);
	}
	for(ll i=1;i<=n;i++)
	{
		if(i&1)
		{
			printf("%lld\n", query(1, 1, n, 1, a[(i+1)/2]-1));
			upd(1, 1, n, a[(i+1)/2], 0);
		}
		else
		{
			printf("%lld\n", query(1, 1, n, a[n-(i/2)+1]+1, n));
			upd(1, 1, n, a[n-(i/2)+1], 0);
		}
	}
}