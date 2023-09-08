#include<bits/stdc++.h>
using namespace std;

int n, m, d[10010], ind[10010];
vector<pair<int, int> > g[10010], rg[10010];
int s, e, chk[10010];
int cnt;

void dfs(int i)
{
	if(chk[i]) return;
	chk[i]=1;
	for(auto j:rg[i])
	{
		if(d[i]==d[j.first]+j.second)
		{
			dfs(j.first);
			cnt++;
		}
	}
}

int main()
{
	scanf("%d%d", &n, &m);
	for(int i=1;i<=m;i++)
	{
		int u, v, c;
		scanf("%d%d%d", &u, &v, &c);
		g[u].push_back({v, c});
		rg[v].push_back({u, c});
		ind[v]++;
	}
	scanf("%d%d", &s, &e);
	
	queue<int> q;
	for(int i=1;i<=n;i++)
	{
		if(ind[i]==0)
		{
			q.push(i);
		}
	}
	while(!q.empty())
	{
		int now = q.front();
		q.pop();
		for(auto next:g[now])
		{
			d[next.first] = max(d[next.first], d[now]+next.second);
			ind[next.first]--;
			if(ind[next.first]==0) q.push(next.first);
		}
	}
	int ans = 0;
	for(int i=1;i<=n;i++)
	{
		ans = max(ans, d[i]);
	}
	printf("%d\n", ans);
	dfs(e);
	printf("%d\n", cnt);
}
