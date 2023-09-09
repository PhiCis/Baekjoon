#include<bits/stdc++.h>
using namespace std;
#define MOD 10000

int N, K, c[110], dp[110][4][3];
int ans;

int main()
{
	scanf("%d%d", &N, &K);
	for(int i=0;i<K;i++)
	{
		int a, b;
		scanf("%d%d", &a, &b);
		c[a]=b;
	}
	
	if(c[1])
	{
		dp[1][c[1]][1]=1;
	}
	else
	{
		for(int j=1;j<=3;j++)
		{
			dp[1][j][1]=1;
		}
	}
	
	for(int i=2;i<=N;i++)
	{
		if(c[i])
		{
			for(int j=1;j<=3;j++)
			{
				if(c[i]==j)
				{
					dp[i][c[i]][2]+=dp[i-1][c[i]][1];
					dp[i][c[i]][2]%=MOD;
				}
				else
				{
					dp[i][c[i]][1]+=dp[i-1][j][1]+dp[i-1][j][2];
					dp[i][c[i]][1]%=MOD;
				}
			}
		}
		else
		{
			for(int j=1;j<=3;j++)
			{
				for(int k=1;k<=3;k++)
				{
					if(j!=k)
					{
						dp[i][j][1]+=dp[i-1][k][1]+dp[i-1][k][2];
						dp[i][j][1]%=MOD;
					}
					else
					{
						dp[i][j][2]+=dp[i-1][j][1];
						dp[i][j][2]%=MOD;
					}
				}
			}
		}
	}
	for(int j=1;j<=3;j++)
	{
		for(int k=1;k<=2;k++)
		{
			ans+=dp[N][j][k];
			ans%=MOD;
		}
	}
	printf("%d", ans);
}