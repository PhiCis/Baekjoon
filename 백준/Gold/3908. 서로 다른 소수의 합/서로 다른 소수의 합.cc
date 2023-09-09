#include<bits/stdc++.h>
using namespace std;

int p[1200];
int dp[20][1200];

int main()
{
	p[2]=1;
	for(int i=3;i<=1120;i+=2)
	{
		p[i]=1;
	}
	for(int i=3;i<=1120;i+=2)
	{
		for(int j=i*i;j<=1120;j+=2*i)
		{
			p[j]=0;
		}
	}
	dp[0][0]=1;
	for(int i=1;i<=1120;i++)
	{
		if(!p[i]) continue;
		for(int j=14;j>=1;j--)
		{
			for(int k=i;k<=1120;k++)
			{
				dp[j][k]+=dp[j-1][k-i];
			}
		}
	}
	int t, a, b;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d%d", &a, &b);
		printf("%d\n", dp[b][a]);
	}
}