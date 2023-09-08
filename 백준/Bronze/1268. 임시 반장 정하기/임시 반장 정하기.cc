#include<bits/stdc++.h>
using namespace std;
int a[1010][10], dp[1010];
int main()
{
	int n;
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=5;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			for(int k=1;k<=5;k++)
			{
				if(a[i][k]==a[j][k])
				{
					dp[i]++;
					break;
				}
			}
		}
	}
	int ans = 0, ansi = 0;
	for(int i=1;i<=n;i++)
	{
		if(ans<dp[i])
		{
			ans=dp[i];
			ansi=i;
		}
	}
	printf("%d", ansi);
}