#include<bits/stdc++.h>
using namespace std;
#define INF 2147483647

int dp[550][550];
pair<int, int> a[550];
int n, x, y;

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d", &x, &y);
		a[i].first=x;
		a[i].second=y;
	}
	for(int i=n;i>=1;i--)
	{
		for(int j=i+1;j<=n;j++)
		{
			dp[i][j]=INF;
			for(int k=i;k<j;k++)
			{
				dp[i][j]=min(dp[i][j], dp[i][k]+dp[k+1][j]+a[i].first*a[k].second*a[j].second);
			}
		}
	}
	printf("%d", dp[1][n]);
}