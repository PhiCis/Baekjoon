#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
ll s, e;
ll T[400010], lz[400010];

void busy(ll id, ll s, ll e)
{
	ll m=s+e>>1;
	T[id*2]+=(m-s+1)*lz[id];
	T[id*2+1]+=(e-m)*lz[id];
	lz[id*2]+=lz[id];
	lz[id*2+1]+=lz[id];
	lz[id]=0;
}

void upd(ll id, ll s, ll e, ll l, ll r, ll v)
{
	if(e < l || r < s) return;
	if(l <= s && e <= r)
	{
		T[id]+=(e-s+1)*v;
		lz[id]+=v;
		return;
	}
	busy(id, s, e);
	ll m=s+e>>1;
	upd(id*2, s, m, l, r, v);
	upd(id*2+1, m+1, e, l, r, v);
	T[id]=T[id*2]+T[id*2+1];
}

ll sum(ll id, ll s, ll e, ll l, ll r)
{
	if(e<l||r<s) return 0;
	if(l<=s&&e<=r) return T[id];
	busy(id, s, e);
	ll m=s+e>>1;
	return sum(id*2, s, m, l, r)+sum(id*2+1, m+1, e, l, r);
}

int main()
{
	scanf("%lld", &n);
	for(ll i=1;i<=n;i++)
	{
		scanf("%lld%lld", &s, &e);
		if(s+1<=e-1)
		{
			upd(1, 1, 100000, s+1, e-1, 1);
		}
		ll tmp1=sum(1, 1, 100000, s, s);
		ll tmp2=sum(1, 1, 100000, e, e);
		upd(1, 1, 100000, s, s, -tmp1);
		upd(1, 1, 100000, e, e, -tmp2);
		printf("%lld\n", tmp1+tmp2);
	}
}