#include<bits/stdc++.h>
using namespace std;

int T, n, u, v, p[10010];

int main()
{
	scanf("%d", &T);
	while(T--)
	{
		scanf("%d", &n);
		for(int i=1;i<=n;i++)
		{
			p[i]=0;
		}
		for(int i=1;i<n;i++)
		{
			int u, v;
			scanf("%d%d", &u, &v);
			p[v] = u;
		}
		scanf("%d%d", &u, &v);
		vector<int> a, b;
		while(p[u]!=u)
		{
			a.push_back(u);
			u = p[u];
		}
		while(p[v]!=v)
		{
			b.push_back(v);
			v = p[v];
		}
		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());
		int pnt = 0, msz = min(a.size(), b.size());
		while(a[pnt]==b[pnt]&&pnt<=msz)
		{
			pnt++;
		}
		printf("%d\n", a[pnt-1]);
	}
}