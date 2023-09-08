#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, m, a[500050], p[500050], s[500050], idv[500050], pnt;
vector<ll> g[500050];
ll T[2000200], lz[2000200];

ll dfs(ll i)
{
	ll res = 1;
	idv[i] = ++pnt;
	for(auto j:g[i])
	{
		res += dfs(j);
	}
	return s[i]=res;
}

void busy(ll id, ll s, ll e)
{
	ll m = s+e>>1;
	ll v = lz[id];
	T[id*2]+=v*(m-s+1);
	T[id*2+1]+=v*(e-m);
	lz[id*2]+=v;
	lz[id*2+1]+=v;
	lz[id]=0;
	return;
}

void upd(ll id, ll s, ll e, ll l, ll r, ll v)
{
	if(r<s||e<l) return;
	if(l<=s&&e<=r)
	{
		T[id]+=v*(e-s+1);
		lz[id]+=v;
		return;
	}
	busy(id, s, e);
	ll m = s+e>>1;
	upd(id*2, s, m, l, r, v);
	upd(id*2+1, m+1, e, l, r, v);
	T[id]=T[id*2]+T[id*2+1];
}

ll query(ll id, ll s, ll e, ll t)
{
	if(t<s||e<t) return 0;
	if(s==e)
	{
		return T[id];
	}
	busy(id, s, e);
	ll m = s+e>>1;
	return query(id*2, s, m, t)+query(id*2+1, m+1, e, t);
}

int main()
{
	scanf("%lld%lld", &n, &m);
	scanf("%lld", &a[1]);
	for(ll i=2;i<=n;i++)
	{
		scanf("%lld%lld", &a[i], &p[i]);
		g[p[i]].push_back(i);
	}
	dfs(1);
	for(ll i=1;i<=n;i++)
	{
		upd(1, 1, n, idv[i], idv[i], a[i]);
	}
	for(ll i=1;i<=m;i++)
	{
		char c;
		scanf(" %c", &c);
		if(c=='p')
		{
			ll u, v;
			scanf("%lld%lld", &u, &v);
//			printf("%lld %lld\n", idv[u]+1, idv[u]+s[u]-1);
			if(s[u]>1) upd(1, 1, n, idv[u]+1, idv[u]+s[u]-1, v);
		}
		else
		{
			ll u;
			scanf("%lld", &u);
			printf("%lld\n", query(1, 1, n, idv[u]));
		}
	}
}