#include<bits/stdc++.h>
using namespace std;

int n, k, w[110], v[110], dp[110][100010];
int main()
{
	scanf("%d%d", &n, &k);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d", &w[i], &v[i]);
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=k;j++)
		{
			if(j>=w[i])
			{
				dp[i][j]=max(dp[i-1][j], dp[i-1][j-w[i]]+v[i]);
			}
			else
			{
				dp[i][j]=dp[i-1][j];
			}
			//printf("%2d ", dp[i][j]);
		}
		//printf("\n");
	}
	printf("%d", dp[n][k]);
}