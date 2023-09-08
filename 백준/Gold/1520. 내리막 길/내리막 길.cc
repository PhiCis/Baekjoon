#include<bits/stdc++.h>
using namespace std;
int M, N, a[510][510], dp[510][510];
int d[4][2]={1, 0, -1, 0, 0, 1, 0, -1};

int dfs(int i, int j)
{
	if(i==M&&j==N) return 1;
	if(i>M||j>N||i<=0||j<=0) return 0;
	if(dp[i][j]!=-1) return dp[i][j];
	dp[i][j]=0;
	for(int k=0;k<4;k++)
	{
		if(a[i+d[k][0]][j+d[k][1]]<a[i][j])	dp[i][j]+=dfs(i+d[k][0], j+d[k][1]);
	}
	return dp[i][j];
}

int main()
{
	scanf("%d%d", &M, &N);
	for(int i=1;i<=M;i++)
	{
		for(int j=1;j<=N;j++)
		{
			scanf("%d", &a[i][j]);
			dp[i][j]=-1;
		}
	}
	printf("%d", dfs(1, 1));
}