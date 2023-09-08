#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, m;
pair<ll, pair<ll, ll> > a[100010];
ll cp[10010];
ll ans;

ll find(ll k)
{
	if(cp[k]==k) return k;
	else return cp[k] = find(cp[k]);
}


int main()
{
	scanf("%lld%lld", &n, &m);	
	for(int i=1;i<=n;i++) cp[i]=i;
	for(int i=0;i<m;i++) scanf("%lld%lld%lld", &a[i].second.first, &a[i].second.second, &a[i].first);
	sort(a, a+m);
	for(ll i=0;i<m;i++)
	{
		if(find(a[i].second.first)==find(a[i].second.second)) continue;
		cp[find(a[i].second.second)]=find(a[i].second.first);
		ans+=a[i].first;
	}
	printf("%lld", ans);
}