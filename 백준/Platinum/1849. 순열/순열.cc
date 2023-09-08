#include<bits/stdc++.h>
using namespace std;

int n, a, k, ans[100010], T[400040];

void upd(int id, int s, int e, int t, int v)
{
	if(s>t||t>e) return;
	if(s==e)
	{
		T[id]=v;
		return;
	}
	int m=s+e>>1;
	upd(id*2, s, m, t, v);
	upd(id*2+1, m+1, e, t, v);
	T[id]=T[id*2]+T[id*2+1];
}

int query(int id, int s, int e, int k)
{
	if(s==e)
	{
		return s;
	}
	int m=s+e>>1;
	if(k>=T[id*2]) return query(id*2+1, m+1, e, k-T[id*2]);
	return query(id*2, s, m, k);
}

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		upd(1, 1, n, i, 1);
	}
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a);
		k=query(1, 1, n, a);
		upd(1, 1, n, k, 0);
		ans[k]=i;
	}
	for(int i=1;i<=n;i++)
	{
		printf("%d\n", ans[i]);
	}
}