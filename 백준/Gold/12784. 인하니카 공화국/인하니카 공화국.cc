#include<bits/stdc++.h>
using namespace std;

int t, n, m;
vector<pair<int, int> > g[1010];
int chk[1010];

int bfs(int now)
{
	chk[now]=1;
	int ret = 0;
	for(auto next:g[now])
	{
		if(chk[next.first]) continue;
		ret+=min(next.second, bfs(next.first));
	}
	return ret==0?2e9:ret;
}

int main()
{
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d%d", &n, &m);
		for(int i=0;i<1010;i++)
		{
			g[i].clear();
			chk[i]=0;
		}
		for(int i=1;i<=m;i++)
		{
			int u, v, c;
			scanf("%d%d%d", &u, &v, &c);
			g[u].push_back({v, c});
			g[v].push_back({u, c});
		}
		int ans = bfs(1);
		
		printf("%d\n", ans==2e9?0:ans);
	}
}