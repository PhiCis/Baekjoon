#include<bits/stdc++.h>
using namespace std;

int a;
int dp[5][5];

int main()
{
	for(int i=0;i<=4;i++)
	{
		for(int j=0;j<=4;j++)
		{
			dp[i][j]=2e9;
		}
	}
	dp[0][0]=0;
	while(1)
	{
		int tmp[5][5];
		for(int i=0;i<=4;i++)
		{
			for(int j=0;j<=4;j++)
			{
				tmp[i][j]=2e9;
			}
		}
		cin>>a;
		if(a==0)
		{
			int ans=2e9;
			for(int i=0;i<=4;i++)
			{
				for(int j=0;j<=4;j++)
				{
					if(dp[i][j]==2e9) continue;
					ans=min(ans, dp[i][j]);
				}
			}
			cout<<ans;
			return 0;
		}
		for(int i=0;i<=4;i++)
		{
			for(int j=0;j<=4;j++)
			{
				if(dp[i][j]==2e9) continue;
				if(a==i)
				{
					tmp[a][j]=min(tmp[a][j], dp[i][j]+1);
				}
				else if(a==j)
				{
					tmp[i][a]=min(tmp[i][a], dp[i][j]+1);
				}
				else
				{
					tmp[a][j]=min(tmp[a][j], dp[i][j]+(i==0?2:(abs(i-a)==2?4:3)));
					tmp[i][a]=min(tmp[i][a], dp[i][j]+(j==0?2:(abs(j-a)==2?4:3)));
				}
			}
		}
		for(int i=0;i<=4;i++)
		{
			for(int j=0;j<=4;j++)
			{
				dp[i][j]=tmp[i][j];
			}
		}
	}
}