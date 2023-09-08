#include<bits/stdc++.h>
using namespace std;
#define INF 2e9
int n;
vector<int> G[100010];
int par[100010];
int dp[100010][20];
int ans=INF;

void p(int now)
{
	for(auto next:G[now])
	{
		if(par[now]==next) continue;
		par[next]=now;
		p(next);
	}
	return;
}

int f(int now, int color)
{
	if(dp[now][color]) return dp[now][color];
	dp[now][color]=color;
	for(auto next:G[now])
	{
		if(par[now]==next) continue;
		int tmp=INF;
		for(int i=1;i<=18;i++)
		{
			if(i==color) continue;
			tmp=min(tmp, f(next, i));
		}
		dp[now][color]+=tmp;
	}
	return dp[now][color];
}

int main()
{
	scanf("%d", &n);
	for(int i=1;i<n;i++)
	{
		int u, v;
		scanf("%d%d", &u, &v);
		G[u].push_back(v);
		G[v].push_back(u);
	}
	p(1);
	for(int i=1;i<=18;i++)
	{
		ans=min(ans, f(1, i));
	}
	printf("%d", ans);
}