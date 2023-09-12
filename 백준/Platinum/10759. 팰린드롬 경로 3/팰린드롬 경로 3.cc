#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
long long n;
char a[510][510];
long long dp[2][510][510];
int main()
{
	scanf("%lld", &n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			scanf(" %c", &a[i][j]);
		}
	}
	for(int i=1;i<=n;i++)
	{
		dp[(n+1)&1][i][i]=1;
	}
	for(int t=n;t>=2;t--)
	{
		for(int sx=1;sx<=n;sx++)
		{
			for(int ex=sx;ex<=n;ex++)
			{
				int sy=t-sx, ey=2*n+2-t-ex;
				if(a[sx][sy]==a[ex][ey]&&sy<=ey)
				{
					dp[t&1][sx][ex]=(dp[(t+1)&1][sx][ex]+dp[(t+1)&1][sx][ex-1]+dp[(t+1)&1][sx+1][ex]+dp[(t+1)&1][sx+1][ex-1])%MOD;
				}
				else dp[t&1][sx][ex]=0;
			}
		}
	}
	printf("%lld", dp[0][1][n]);
}