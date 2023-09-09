#include<bits/stdc++.h>
using namespace std;

int t, n, a[30], m, dp[10010];
int main()
{
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		for(int i=1;i<=n;i++)
		{
			scanf("%d", &a[i]);
		}
		scanf("%d", &m);
		dp[0]=1;
		for(int i=1;i<=m;i++)
		{
			dp[i]=0;
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=0;j<=m-a[i];j++)
			{
				dp[j+a[i]]+=dp[j];
			}
		}
		printf("%d\n", dp[m]);
	}
}