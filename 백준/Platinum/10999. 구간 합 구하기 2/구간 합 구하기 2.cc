#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll N, M, K;
ll a, x, y, z;
ll T[4040400], lz[4040400];

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
	scanf("%lld%lld%lld", &N, &M, &K);
	for(ll i=1;i<=N;i++)
	{
		scanf("%lld", &a);
		upd(1, 1, N, i, i, a);
	}
	for(ll i=1;i<=M+K;i++)
	{
		scanf("%lld", &a);
		if(a==1)
		{
			scanf("%lld%lld%lld", &x, &y, &z);
			upd(1, 1, N, x, y, z);
		}
		else
		{
			scanf("%lld%lld", &x, &y);
			printf("%lld\n", sum(1, 1, N, x, y));
		}
	}
}