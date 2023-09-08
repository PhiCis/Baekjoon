#include<bits/stdc++.h>
using namespace std;
#define MOD 9901

int N, M, dp[200][20000];

int f(int tile, int bit)
{
	if(tile==N*M&&bit==0) return 1;
	if(tile>=N*M) return 0;
	
	if(dp[tile][bit]!=-1) return dp[tile][bit];
	
	dp[tile][bit]=0;
	if(bit&1) return dp[tile][bit]=f(tile+1, bit>>1)%MOD;
	dp[tile][bit]=f(tile+1, (bit>>1)+(1<<M-1));
	if(tile%M!=M-1&&(bit&2)==0) dp[tile][bit]=(dp[tile][bit]+f(tile+2, bit>>2))%MOD;
	return dp[tile][bit];
}

int main()
{
	scanf("%d%d", &N, &M);
	memset(dp, -1, sizeof(dp));
	printf("%d", f(0, 0));
}