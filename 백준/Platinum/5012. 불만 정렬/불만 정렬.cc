#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll T1[400400], T2[400400];
ll n, ans;

void upd1(ll id, ll s, ll e, ll t, ll v)
{
	if(t<s||e<t) return;
	if(s==e)
	{
		T1[id]+=v;
		return;
	}
	ll m = s+e>>1;
	upd1(id*2, s, m, t, v);
	upd1(id*2+1, m+1, e, t, v);
	T1[id]=T1[id*2]+T1[id*2+1];
}

ll sum1(ll id, ll s, ll e, ll l, ll r)
{
	if(l>r) return 0;
	if(r<s||e<l) return 0;
	if(l<=s&&e<=r)
	{
		return T1[id];
	}
	ll m = s+e>>1;
	return sum1(id*2, s, m, l, r)+sum1(id*2+1, m+1, e, l, r);
}
void upd2(ll id, ll s, ll e, ll t, ll v)
{
	if(t<s||e<t) return;
	if(s==e)
	{
		T2[id]+=v;
		return;
	}
	ll m = s+e>>1;
	upd2(id*2, s, m, t, v);
	upd2(id*2+1, m+1, e, t, v);
	T2[id]=T2[id*2]+T2[id*2+1];
}

ll sum2(ll id, ll s, ll e, ll l, ll r)
{
	if(l>r) return 0;
	if(r<s||e<l) return 0;
	if(l<=s&&e<=r)
	{
		return T2[id];
	}
	ll m = s+e>>1;
	return sum2(id*2, s, m, l, r)+sum2(id*2+1, m+1, e, l, r);
}

int main()
{
	scanf("%lld", &n);
	for(ll i=1;i<=n;i++)
	{
		ll a;
		scanf("%lld", &a);
		upd1(1, 1, n, a, 1);
		upd2(1, 1, n, a, sum1(1, 1, n, a+1, n));
		ans+=sum2(1, 1, n, a+1, n);
	}
	printf("%lld", ans);
}