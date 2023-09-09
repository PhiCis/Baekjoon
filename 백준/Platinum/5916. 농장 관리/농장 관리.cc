#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, m, a[100010], p[100010], s[100010], idv[100010], pnt;
vector<ll> g[100010];
ll T[400040], lz[400040];
vector<ll> adj[100010];
ll P[101010][20], D[101010];

void dfs0(ll u, ll p)
{
	P[u][0]=p;
	g[p].push_back(u);
	for(auto v:adj[u])
	{
		if(v==p) continue;
		D[v]=D[u]+1;
		dfs0(v, u);
	}
}

int LCA(ll u, ll v)
{
	if(D[u]>D[v]) swap(u, v);
	for(ll i=18;i>=0;i--)
	{
		if(D[v]-D[u]>=(1<<i))
		{
			v=P[v][i];
		}
	}
	if(u==v) return u;
	for(ll i=18;i>=0;i--)
	{
		if(P[u][i]!=P[v][i])
		{
			u=P[u][i], v=P[v][i];
		}
	}
	return P[u][0];
}

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

ll query(ll id, ll s, ll e, ll l, ll r)
{
	if(r<s||e<l) return 0;
	if(l<=s&&e<=r)
	{
		return T[id];
	}
	busy(id, s, e);
	ll m = s+e>>1;
	return query(id*2, s, m, l, r)+query(id*2+1, m+1, e, l, r);
}

int main()
{
	scanf("%lld%lld", &n, &m);
	for(int i=1;i<n;i++) //트리를 구성한다. 
	{
		ll u, v;
		scanf("%lld%lld", &u, &v);
		adj[u].push_back(v), adj[v].push_back(u);
	}
	dfs0(1, 0);
	for(int i=1;i<=18;i++)
	{
		for(int j=1;j<=n;j++)
		{
			P[j][i]=P[P[j][i-1]][i-1];
		}
	}
	dfs(1);
	for(ll i=1;i<=m;i++)
	{
		char c;
		scanf(" %c", &c);
		if(c=='P')
		{
			ll u, v;
			scanf("%lld%lld", &u, &v);
			ll x = LCA(u, v);
			upd(1, 1, n, idv[u], idv[u], 1);
			upd(1, 1, n, idv[v], idv[v], 1);
			upd(1, 1, n, idv[x], idv[x], -2);
		}
		else
		{
			ll u, v;
			scanf("%lld%lld", &u, &v);
			if(idv[u]<idv[v])
			{
				printf("%lld\n", query(1, 1, n, idv[v], idv[v]+s[v]-1));
			}
			else
			{
				printf("%lld\n", query(1, 1, n, idv[u], idv[u]+s[u]-1));
			}
		}
	}
}