#include<bits/stdc++.h>
using namespace std;

int n, m, p, a[100100], b[100100];

vector<int> g[100010];
bool v[100010];

int ans;

int main()
{
	scanf("%d%d%d", &n, &m, &p);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d", &a[i], &b[i]);
		g[b[i]].push_back(a[i]);
	}
	while(1)
	{
		if(v[p])
		{
			printf("-1");
			return 0;
		}
		v[p]=1;
		if(g[p].size()==0)
		{
			printf("%d", ans);
			return 0;
		}
		ans++;
		p=g[p][0];
	}
}