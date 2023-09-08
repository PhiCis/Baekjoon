#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, k;
ll dp[55][110];

ll init(ll i, ll j)
{
	if(dp[i][j+50]!=-1) return dp[i][j+50];
	if(i==0) return dp[i][j+50]=(j==0?0:1);
	if(j<0) return dp[i][j+50]=1ll<<i;
	return dp[i][j+50]=init(i-1, j+1)+init(i-1, j-1);
}

void calc(ll i, ll j, ll k)
{
	if(i==0) return;
	if(j<0)
	{
		for(int l=i-1;l>=0;l--)
		{
			printf("%c", (k&(1ll<<l))?')':'(');
		}
		return;
	}
	if(dp[i-1][j+51]>k)
	{
		printf("(");
		calc(i-1, j+1, k);
	}
	else
	{
		printf(")");
		calc(i-1, j-1, k-dp[i-1][j+51]);
	}
}

int main()
{
	fill(&dp[0][0], &dp[54][110], -1);
	scanf("%lld%lld", &n, &k);
	init(n, 0);
	
	if(dp[n][50]<=k) printf("-1");
	else calc(n, 0, k);
}