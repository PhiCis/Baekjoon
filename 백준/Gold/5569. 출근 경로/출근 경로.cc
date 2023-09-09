#include<bits/stdc++.h>
#define MOD 100000
using namespace std;
int w, h;
int dp[110][110][4];//lu, lr, dr, du 
int main()
{
	scanf("%d%d", &w, &h);
	for(int i=1;i<=w;i++)
	{
		dp[i][1][2]=dp[i][1][3]=1;
	}
	for(int j=1;j<=h;j++)
	{
		dp[1][j][0]=dp[1][j][1]=1;
	}
	for(int i=2;i<=w;i++)
	{
		for(int j=2;j<=h;j++)
		{
			dp[i][j][0]=dp[i][j-1][1];
			dp[i][j][1]=(dp[i][j-1][1]+dp[i][j-1][2])%MOD;
			dp[i][j][2]=dp[i-1][j][3];
			dp[i][j][3]=(dp[i-1][j][3]+dp[i-1][j][0])%MOD;
		}
	}
	printf("%d", (dp[w][h][1]+dp[w][h][3])%MOD);
}