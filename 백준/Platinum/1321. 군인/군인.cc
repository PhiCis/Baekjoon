#include<bits/stdc++.h>
using namespace std;

int n, a[500050], m;
int T[2000200];

void upd(int id, int s, int e, int t, int v)
{
	if(t<s||e<t) return;
	if(s==e)
	{
		T[id]+=v;
		return;
	}
	int m = s+e>>1;
	upd(id*2, s, m, t, v);
	upd(id*2+1, m+1, e, t, v);
	T[id]=T[id*2]+T[id*2+1];
}

int find(int id, int s, int e, int v)
{
	if(s==e) return s;
	int m = s+e>>1;
	if(T[id*2]<v)
	{
		return find(id*2+1, m+1, e, v-T[id*2]);
	}
	else
	{
		return find(id*2, s, m, v);
	}
}


int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
		upd(1, 1, n, i, a[i]);
	}
	scanf("%d", &m);
	for(int i=1;i<=m;i++)
	{
		int u, v, w;
		scanf("%d", &u);
		if(u==1)
		{
			scanf("%d%d", &v, &w);
			upd(1, 1, n, v, w);
		}
		else
		{
			scanf("%d", &v);
			printf("%d\n", find(1, 1, n, v));
		}
	}
}