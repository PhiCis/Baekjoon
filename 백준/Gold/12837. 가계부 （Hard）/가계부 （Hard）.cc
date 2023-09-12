#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, q;
ll a, b, c, T[4000010];
void update(ll id, ll s, ll e, ll t, ll v)
{
	if(t<s||t>e) return;
	if(s==e)
	{
		T[id]+=v;
		return;
	}
	ll m=s+e>>1;
	update(id*2, s, m, t, v);
	update(id*2+1, m+1, e, t, v);
	T[id]=T[id*2]+T[id*2+1];
}
ll sq(ll id, ll s, ll e, ll l, ll r)
{
	if(r<s||e<l) return 0;
	if(l<=s&&e<=r) return T[id];
	ll m=s+e>>1;
	return sq(id*2, s, m, l, r)+sq(id*2+1, m+1, e, l, r);
}
int main()
{
	scanf("%d%d", &n, &q);
	for(int i=1;i<=q;i++)
	{
		scanf("%lld%lld%lld", &a, &b, &c);
		if(a==1) update(1, 1, n, b, c);
		if(a==2) printf("%lld\n", sq(1, 1, n, b, c));
	}
}