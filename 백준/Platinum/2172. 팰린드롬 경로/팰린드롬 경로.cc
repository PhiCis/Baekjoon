#include<bits/stdc++.h>
using namespace std;

int a[22][22];
int dp[22][22][22][22][22];
int d[8][2]={1, 1, 1, 0, 1, -1, 0, 1, 0, -1, -1, 1, -1, 0, -1, -1};
int ans;

int n, l;

int main()
{
	for(int i=0;i<=21;i++)
	{
		for(int j=0;j<=21;j++)
		{
			a[i][j]=-1;
		}
	}
	scanf("%d%d", &n, &l);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			scanf("%d", &a[i][j]);
			dp[i][j][i][j][1]++;
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			for(int k=0;k<8;k++)
			{
				if(a[i][j]==a[i+d[k][0]][j+d[k][1]])
				{
					dp[i][j][i+d[k][0]][j+d[k][1]][2]++;
				}
			}
		}
	}
	for(int i=3;i<=l;i++)
	{
		for(int j=1;j<=n;j++)
		{
			for(int k=1;k<=n;k++)
			{
				for(int m=1;m<=n;m++)
				{
					for(int o=1;o<=n;o++)
					{
						if(a[j][k]==a[m][o])
						{
							for(int p=0;p<8;p++)
							{
								for(int q=0;q<8;q++)
								{
									dp[j][k][m][o][i]+=dp[j+d[p][0]][k+d[p][1]][m+d[q][0]][o+d[q][1]][i-2];
								}
							}
						}
					}
				}
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			for(int k=1;k<=n;k++)
			{
				for(int m=1;m<=n;m++)
				{
					ans+=dp[i][j][k][m][l];
				}
			}
		}
	}
	printf("%d", ans);
	
}