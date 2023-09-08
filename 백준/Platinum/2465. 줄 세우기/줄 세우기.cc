#include<bits/stdc++.h>
using namespace std;

int n, a[100010], b[100010], ans[100010];
int T[400040];

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
	T[id]=T[id*2]+T[id*2+1];
	return;
}

int find(int id, int s, int e, int k)
{
	if(s==e)
	{
		return s;
	}
	int m=s+e>>1;
	if(T[id*2]<k)
	{
		return find(id*2+1, m+1, e, k-T[id*2]);
	}
	else
	{
		return find(id*2, s, m, k);
	}
}

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
		upd(1, 1, n, i, 1);
	}
	sort(a+1, a+n+1);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &b[i]);
	}
	for(int i=n;i>=1;i--)
	{
		int t=find(1, 1, n, b[i]+1);
		ans[i]=a[t];
		upd(1, 1, n, t, 0);
	}
	for(int i=1;i<=n;i++)
	{
		printf("%d\n", ans[i]);
	}
}