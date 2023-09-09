#include<bits/stdc++.h>
using namespace std;

int N, M;
int m[110], c[110];
int C, dp[10010];

int main()
{
	scanf("%d%d", &N, &M);
	for(int i=1;i<=N;i++)
	{
		scanf("%d", &m[i]);
	}
	for(int i=1;i<=N;i++)
	{
		scanf("%d", &c[i]);
		C+=c[i];
	}
	for(int i=1;i<=N;i++)
	{
		for(int j=C;j>=c[i];j--)
		{
			dp[j]=max(dp[j], dp[j-c[i]]+m[i]);
		}
	}
	for(int i=0;i<=C;i++)
	{
		if(dp[i]>=M)
		{
			printf("%d", i);
			return 0;
		}
	}
}