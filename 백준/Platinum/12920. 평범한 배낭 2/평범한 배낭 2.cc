#include<bits/stdc++.h>
using namespace std;

int n, m, v, c, k;

vector<pair<int, int> > V;
int sz;

int dp[2][10010];

int main()
{
	scanf("%d%d", &n, &m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d%d", &v, &c, &k);
		int tmp=1;
		while(tmp<=k)
		{
			V.push_back({v*tmp, c*tmp});
			k-=tmp;
			tmp*=2;
		}
		V.push_back({v*k, c*k});
	}
	sz=V.size();
	for(int i=0;i<sz;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(j>=V[i].first)
			{
				dp[i&1][j]=max(dp[(i-1)&1][j], dp[(i-1)&1][j-V[i].first]+V[i].second);
			}
			else
			{
				dp[i&1][j]=dp[(i-1)&1][j];
			}
		}
	}
	printf("%d", dp[(sz-1)&1][m]);
}