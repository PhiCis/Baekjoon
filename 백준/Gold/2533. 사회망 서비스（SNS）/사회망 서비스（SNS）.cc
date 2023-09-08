#include<bits/stdc++.h>
using namespace std;

int n, u, v;
vector<int> G[1000010];
int p[1000010];
queue<int> Q;
int dp[1000010][2];

int dfs(int k, int is_early)
{
	int res=0;
	if(is_early==0)
	{
		for(auto i:G[k])
		{
			if(p[k]==i) continue;
			
			if(dp[i][1]==-1) dp[i][1]=dfs(i, 1);
			
			res+=dp[i][1];
		}
	}
	else
	{
		res++;
		for(auto i:G[k])
		{
			if(p[k]==i) continue;
			
			if(dp[i][1]==-1) dp[i][1]=dfs(i, 1);
			if(dp[i][0]==-1) dp[i][0]=dfs(i, 0);
			
			res+=min(dp[i][0], dp[i][1]);
		}
	}
	return dp[k][is_early]=res;
}

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		p[i]=-1;
		dp[i][0]=dp[i][1]=-1;
	}
	for(int i=1;i<n;i++)
	{
		scanf("%d%d", &u, &v);
		G[u].push_back(v);
		G[v].push_back(u);
	}
	
	p[1]=0;
	Q.push(1);
	while(!Q.empty())
	{
		int now=Q.front();
		Q.pop();
		for(auto next:G[now])
		{
			if(p[next]!=-1) continue;
			p[next]=now;
			Q.push(next);
		}
	}
	
	printf("%d", min(dfs(1, 0), dfs(1, 1)));
}