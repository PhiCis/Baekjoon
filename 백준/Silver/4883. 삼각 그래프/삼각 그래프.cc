#include<bits/stdc++.h>
using namespace std;

int n;
int cnt;
int a[100010][5];
int dp[100010][5];

int main()
{
	while(1)
	{
		cnt++;
		scanf("%d", &n);
		if(n==0) return 0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=3;j++)
			{
				scanf("%d", &a[i][j]);
				dp[i][j]=2e9;
			}
		}
		dp[1][2]=a[1][2];
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=3;j++)
			{
				dp[i][j+1]=min(dp[i][j+1], dp[i][j]+a[i][j+1]);
				dp[i+1][j+1]=min(dp[i+1][j+1], dp[i][j]+a[i+1][j+1]);
				dp[i+1][j]=min(dp[i+1][j], dp[i][j]+a[i+1][j]);
				dp[i+1][j-1]=min(dp[i+1][j-1], dp[i][j]+a[i+1][j-1]);
			}
		}
		printf("%d. %d\n", cnt, dp[n][2]);
	}
}