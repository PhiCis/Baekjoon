#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000000

ll n;
ll dp[110][11][1030];
ll ans;

int main()
{
	scanf("%lld", &n);
	for(int i=1;i<=9;i++)
	{
		dp[1][i][1<<i]=1;
	}
	
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<=9;j++)
		{
			for(int k=0;k<(1<<10);k++)
			{
				if(j<9)
				{
					dp[i+1][j+1][k|(1<<(j+1))]+=dp[i][j][k];
					dp[i+1][j+1][k|(1<<(j+1))]%=MOD;
				}
				if(j>0)
				{
					dp[i+1][j-1][k|(1<<(j-1))]+=dp[i][j][k];
					dp[i+1][j-1][k|(1<<(j-1))]%=MOD;
				}
			}
		}
	}
	
	for(int i=0;i<=9;i++)
	{
		ans+=dp[n][i][(1<<10)-1];
		ans%=MOD;
	}
	printf("%lld", ans);
}