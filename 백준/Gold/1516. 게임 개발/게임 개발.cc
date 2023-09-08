#include<bits/stdc++.h>
using namespace std;

int n, a[550], dp[550];
vector<int> g[550];

int dfs(int i)
{
	if(dp[i]!=-1) return dp[i];
	dp[i]=a[i];
	for(auto j:g[i])
	{
		dp[i]=max(dp[i], dfs(j)+a[i]);
	}
	return dp[i];
}

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
		while(1)
		{
			int v;
			scanf("%d", &v);
			if(v==-1) break;
			g[i].push_back(v);
		}
		dp[i]=-1;
	}
	for(int i=1;i<=n;i++)
	{
		if(dp[i]==-1)
		{
			dfs(i);
		}
	}
	for(int i=1;i<=n;i++)
	{
		printf("%d\n", dp[i]);
	}
}