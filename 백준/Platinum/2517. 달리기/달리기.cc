#include<bits/stdc++.h>
using namespace std;
#define INF 2e9
typedef long long ll;
ll n, m, T[2000400];
void update(ll id, ll s, ll e, ll target, ll data)
{
	if(target<s||target>e) return;
	if(s==e)
	{
		T[id]=data;
		return;
	}
	ll m=s+e>>1;
	update(id*2, s, m, target, data);
	update(id*2+1, m+1, e, target, data);
	T[id]=T[id*2]+T[id*2+1];
}
ll sum(ll id, ll s, ll e, ll l, ll r)
{
	if(l>r) return 0;
	if(r<s||e<l) return 0;
	if(s>=l&&r>=e)
	{
		return T[id];
	}
	ll m=s+e>>1;
	return sum(id*2, s, m, l, r)+sum(id*2+1, m+1, e, l, r);
	
}
struct a{
	int v, d;
}a[500010];

bool cmp1(struct a t, struct a s)
{
	return t.v<s.v;
}
bool cmp2(struct a t, struct a s)
{
	return t.d<s.d;
}

int main()
{
	scanf("%lld", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld", &a[i].v);
		a[i].d=i;
	}
	sort(a+1, a+1+n, cmp1);
	for(int i=1;i<=n;i++)
	{
		a[i].v=i;
	}
	sort(a+1, a+1+n, cmp2);
	for(int i=1;i<=n;i++)
	{
		update(1, 1, n, a[i].v, 1);
		printf("%d\n", i-sum(1, 1, n, 1, a[i].v-1));
	}
}