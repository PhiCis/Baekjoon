#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll N, M, K;
ll a, x, y, z;
ll T[4040400], lz[4040400];

void busy(ll id, ll s, ll e)
{
	ll m=s+e>>1;
	if(m-s+1&1) T[id*2]^=lz[id];
	if(e-m&1) T[id*2+1]^=lz[id];
	lz[id*2]^=lz[id];
	lz[id*2+1]^=lz[id];
	lz[id]=0;
}

void upd(ll id, ll s, ll e, ll l, ll r, ll v)
{
	if(e < l || r < s) return;
	if(l <= s && e <= r)
	{
		if(e-s+1&1) T[id]^=v;
		lz[id]^=v;
		return;
	}
	busy(id, s, e);
	ll m=s+e>>1;
	upd(id*2, s, m, l, r, v);
	upd(id*2+1, m+1, e, l, r, v);
	T[id]=T[id*2]^T[id*2+1];
}

ll binor(ll id, ll s, ll e, ll l, ll r)
{
	if(e<l||r<s) return 0;
	if(l<=s&&e<=r) return T[id];
	busy(id, s, e);
	ll m=s+e>>1;
	return binor(id*2, s, m, l, r)^binor(id*2+1, m+1, e, l, r);
}

int main()
{
	scanf("%lld", &N);
	for(ll i=1;i<=N;i++)
	{
		scanf("%lld", &a);
		upd(1, 1, N, i, i, a);
	}
	scanf("%lld", &M);
	for(ll i=1;i<=M;i++)
	{
		scanf("%lld", &a);
		if(a==1)
		{
			scanf("%lld%lld%lld", &x, &y, &z);
			upd(1, 1, N, x+1, y+1, z);
		}
		else
		{
			scanf("%lld%lld", &x, &y);
			printf("%lld\n", binor(1, 1, N, x+1, y+1));
		}
	}
}