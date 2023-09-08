#include<bits/stdc++.h>
using namespace std;
#define MOD 9901

int n, k;
int dp[120][120]; // a개로 만들 수 있는 높이 b 이하의 개수  

int main()
{
	scanf("%d%d", &n, &k);
	
	if(!(n&1))
	{
		printf("0");
		return 0;
	}
	
	n=n-1>>1;
	
	for(int i=1;i<=k;i++)
	{
		dp[0][i]=1;
	}
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=k;j++)
		{
			for(int l=1;l<=i;l++)
			{
				dp[i][j]=(dp[i][j]+dp[i-l][j-1]*dp[l-1][j-1])%MOD;
			}
		}
	}
	printf("%d", (dp[n][k]-dp[n][k-1]+MOD)%MOD);
}