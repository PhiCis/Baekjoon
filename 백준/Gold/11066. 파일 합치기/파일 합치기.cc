#include<bits/stdc++.h>
using namespace std;
#define INF 2e9
int t;
int main()
{
	scanf("%d", &t);
	while(t--)
	{
		int a[510]={0};
		int s[510]={0};
		int dp[510][510]={0};
		int n;
		scanf("%d", &n);
		for(int i=1;i<=n;i++)
		{
			scanf("%d", &a[i]);
			s[i]=s[i-1]+a[i];
		}
		for(int i=1;i<=n;i++)
		{
			dp[i][i]=0;
		}
		for(int i=1;i<=n-1;i++)
		{
			dp[i][i+1]=a[i]+a[i+1];
		}
		for(int j=2;j<n;j++)
		{
			for(int i=1;i<=n-j;i++)
			{
				dp[i][i+j]=INF;
				for(int k=i;k<i+j;k++)
				{
					dp[i][i+j]=min(dp[i][i+j], dp[i][k]+dp[k+1][i+j]+s[i+j]-s[i-1]);
				}
			}
		}
		printf("%d\n", dp[1][n]);
	}
}