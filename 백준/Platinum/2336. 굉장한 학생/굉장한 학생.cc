#include<bits/stdc++.h>
using namespace std;
#define INF 2e9

int n, ans, s;
tuple<int, int, int> a[500050];

int T[2000020];

void upd(int id, int s, int e, int t, int v)
{
	if(s>t||e<t) return;
	if(s==e)
	{
		T[id]=v;
		return;
	}
	int m=s+e>>1;
	upd(id*2, s, m, t, v);
	upd(id*2+1, m+1, e, t, v);
	T[id]=min(T[id*2], T[id*2+1]);
	return;
}

int query(int id, int s, int e, int l, int r)
{
	if(e<l||r<s) return INF;
	if(l<=s&&e<=r) return T[id];
	int m=s+e>>1;
	return min(query(id*2, s, m, l, r), query(id*2+1, m+1, e, l, r));
}

int main()
{
	scanf("%d", &n);
	ans=n;
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &s);
		get<0>(a[s])=i;
	}
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &s);
		get<1>(a[s])=i;
	}
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &s);
		get<2>(a[s])=i;
	}
	sort(a+1, a+n+1);
	/*
	for(int i=0;i<n;i++)
	{
		printf("%d %d %d\n", get<0>(a[i]), get<1>(a[i]), get<2>(a[i]));
	}
	*/
	for(int i=1;i<=n;i++)
	{
		upd(1, 1, n, i, INF);
	}
	for(int i=1;i<=n;i++)
	{
		upd(1, 1, n, get<2>(a[i]), get<1>(a[i]));
		if(query(1, 1, n, 1, get<2>(a[i])) < get<1>(a[i])) ans--;
	}
	printf("%d", ans);
}