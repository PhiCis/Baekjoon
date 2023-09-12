#include<bits/stdc++.h>
using namespace std;

int N, M, a[1010][1010], dp[1010][1010];

int main()
{
	scanf("%d%d", &N, &M);
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=M;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=M;j++)
		{
			dp[i][j]=max(max(dp[i-1][j-1], dp[i-1][j]), dp[i][j-1])+a[i][j];
		}
	}
	printf("%d", dp[N][M]);
}