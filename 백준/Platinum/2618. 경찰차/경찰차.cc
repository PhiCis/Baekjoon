#include<bits/stdc++.h>
using namespace std;

int n, w;

int x[1010], y[1010];
int dp[1010][1010];

int dfs(int i, int j)
{
	if(dp[i][j]!=-1) return dp[i][j];
	
	if(i==w||j==w) return 0;
	int k = max(i, j)+1;
	
	int tmp1, tmp2;
	
	if(i==0) tmp1 = dfs(k, j)+abs(1-x[k])+abs(1-y[k]);
	else tmp1 = dfs(k, j)+abs(x[k]-x[i])+abs(y[k]-y[i]);
			
	if(j==0) tmp2 = dfs(i, k)+abs(n-x[k])+abs(n-y[k]);
	else tmp2 = dfs(i, k)+abs(x[k]-x[j])+abs(y[k]-y[j]);
	
	return dp[i][j]=min(tmp1, tmp2);
}

void trk(int i, int j)
{
	int k = max(i, j)+1;
	if(k>w) exit(0);
	int tmp1, tmp2;
	if(i==0) tmp1 = dp[k][j]+abs(1-x[k])+abs(1-y[k]);
	else tmp1 = dp[k][j]+abs(x[k]-x[i])+abs(y[k]-y[i]);
	if(j==0) tmp2 = dp[i][k]+abs(n-x[k])+abs(n-y[k]);
	else tmp2 = dp[i][k]+abs(x[k]-x[j])+abs(y[k]-y[j]);
	if(tmp1<tmp2)
	{
		printf("1\n");
		trk(k, j);
	}
	else
	{
		printf("2\n");
		trk(i, k);
	}
}

int main()
{
	for(int i=0;i<1010;i++)
	{
		for(int j=0;j<1010;j++)
		{
			dp[i][j]=-1;
		}
	}
	scanf("%d%d", &n, &w);
	for(int i=1;i<=w;i++)
	{
		scanf("%d%d", &x[i], &y[i]);
	}
	printf("%d\n", dfs(0, 0));
	trk(0, 0);
}