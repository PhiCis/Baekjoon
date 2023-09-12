#include<bits/stdc++.h>
using namespace std;
#define INF 9000000000000000000ll
typedef long long ll;

ll m, n, a[100010], b[100010], c[100010], d[100010];

vector<ll> v;
ll sz;

ll T1[400040];
ll T2[400040];

ll find(ll k)
{
	ll s=1, e=sz;
	while(s<=e)
	{
		ll m=s+e>>1;
		if(v[m]==k) return m;
		else if(v[m]>k) e=m-1;
		else s=m+1;
	}
}

void upd1(ll id, ll s, ll e, ll t, ll v)
{
	if(s>t||e<t) return;
	if(s==e)
	{
		T1[id]=min(T1[id], v);
		return;
	}
	ll m=s+e>>1;
	upd1(id*2, s, m, t, v);
	upd1(id*2+1, m+1, e, t, v);
	T1[id]=min(T1[id*2], T1[id*2+1]);
	return;
}

void upd2(ll id, ll s, ll e, ll t, ll v)
{
	if(s>t||e<t) return;
	if(s==e)
	{
		T2[id]=min(T2[id], v);
		return;
	}
	ll m=s+e>>1;
	upd2(id*2, s, m, t, v);
	upd2(id*2+1, m+1, e, t, v);
	T2[id]=min(T2[id*2], T2[id*2+1]);
	return;
}

ll query1(ll id, ll s, ll e, ll l, ll r)
{
	if(v[s]>r||v[e]<l) return INF;
	if(l<=v[s]&&v[e]<=r) return T1[id];
	ll m=s+e>>1;
	return min(query1(id*2, s, m, l, r), query1(id*2+1, m+1, e, l, r));
}

ll query2(ll id, ll s, ll e, ll l, ll r)
{
	if(v[s]>r||v[e]<l) return INF;
	if(l<=v[s]&&v[e]<=r) return T2[id];
	ll m=s+e>>1;
	return min(query2(id*2, s, m, l, r), query2(id*2+1, m+1, e, l, r));
}

ll ans=INF;

int main()
{
	scanf("%lld%lld", &m, &n);
	v.push_back(0);
	v.push_back(1);
	v.push_back(n);
	for(ll i=1;i<=m;i++)
	{
		scanf("%lld%lld%lld%lld", &a[i], &b[i], &c[i], &d[i]);
		v.push_back(c[i]);
	}
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	sz=v.size()-1;
	
	for(ll i=1;i<=4*sz;i++)
	{
		T1[i]=T2[i]=INF;
	}
	upd1(1, 1, sz, 1, 0);
	upd2(1, 1, sz, sz, 0);
	for(ll i=1;i<=m;i++)
	{
		ll tmp1=query1(1, 1, sz, a[i], b[i]);
		ll tmp2=query2(1, 1, sz, a[i], b[i]);
		if(tmp1!=INF&&tmp2!=INF)
		{
			ans=min(ans, tmp1+tmp2+d[i]);
		}
		else
		{
			upd1(1, 1, sz, find(c[i]), min(tmp1+d[i], INF));
			upd2(1, 1, sz, find(c[i]), min(tmp2+d[i], INF));
		}
	}
	if(ans==INF) printf("-1");
	else printf("%lld", ans);
}