#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll N, t, Q;
ll a, x, y, z;
ll T[4040400], lz[4040400];

void busy(ll id, ll s, ll e)
{
	if(lz[id])
	{
		T[id]=(1<<lz[id]);
		if(s!=e)
		{
			lz[id*2]=lz[id];
			lz[id*2+1]=lz[id];
		}
		lz[id]=0;
	}	
}

void upd(ll id, ll s, ll e, ll l, ll r, ll v)
{
	busy(id, s, e);
	if(e < l || r < s) return;
	if(l <= s && e <= r)
	{
		lz[id]=v;
		busy(id, s, e);
		return;
	}
	ll m=s+e>>1;
	upd(id*2, s, m, l, r, v);
	upd(id*2+1, m+1, e, l, r, v);
	T[id]=T[id*2]|T[id*2+1];
}

ll bitmask(ll id, ll s, ll e, ll l, ll r)
{
	busy(id, s, e);
	if(e<l||r<s) return 0;
	if(l<=s&&e<=r) return T[id];
	ll m=s+e>>1;
	return bitmask(id*2, s, m, l, r)|bitmask(id*2+1, m+1, e, l, r);
}

int main()
{
	scanf("%lld%lld%lld", &N, &t, &Q);
	for(ll i=1;i<=N;i++)
	{
		upd(1, 1, N, i, i, 1);
	}
	for(ll i=1;i<=Q;i++)
	{
		scanf(" %c", &a);
		if(a=='C')
		{
			scanf("%lld%lld%lld", &x, &y, &z);
			if(x>y)
			{
				ll tmp=x;
				x=y;
				y=tmp;
			}
			upd(1, 1, N, x, y, z);
		}
		else
		{
			scanf("%lld%lld", &x, &y);
			if(x>y)
			{
				ll tmp=x;
				x=y;
				y=tmp;
			}
			ll ans=bitmask(1, 1, N, x, y);
			ll cnt=0;
			while(ans)
			{
				cnt+=ans&1;
				ans>>=1;
			}
			
			printf("%lld\n", cnt);
		}
	}
}