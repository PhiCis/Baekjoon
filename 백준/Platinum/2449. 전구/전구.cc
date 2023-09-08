#include<bits/stdc++.h>
using namespace std;
#define INF 2000000000
int N, K, a[210], dp[210][210];
int main()
{
	scanf("%d%d", &N, &K);
	for(int i=1;i<=N;i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i=1;i<N;i++)
	{
		for(int j=1;i+j<=N;j++)
		{
			dp[j][i+j]=INF;
			for(int k=j;k<i+j;k++)
			{
				dp[j][i+j]=min(dp[j][i+j], dp[j][k]+dp[k+1][i+j]+(a[j]==a[k+1]?0:1));
			}
		}
	}
	printf("%d", dp[1][N]);
}