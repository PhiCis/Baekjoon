#include<bits/stdc++.h>
using namespace std;

int n, m, u, v, c;
vector<pair<int, int> > g[1010];

int main()
{
	scanf("%d%d", &n, &m);
	for(int i=1;i<n;i++)
	{
		scanf("%d%d%d", &u, &v, &c);
		g[u].push_back({v, c});
		g[v].push_back({u, c});
	}
	for(int i=1;i<=m;i++)
	{
		scanf("%d%d", &u, &v);
		vector<int> c(n+1, -1);
		queue<int> q;
		q.push(u);
		c[u]=0;
		while(!q.empty())
		{
			int now = q.front();
			q.pop();
			if(now==v)
			{
				printf("%d\n", c[now]);
				break;
			}
			for(auto next:g[now])
			{
				if(c[next.first]!=-1) continue;
				c[next.first]=c[now]+next.second;
				q.push(next.first);
			}
		}
	}
}