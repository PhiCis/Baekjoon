#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, a, v, d;
vector<pair<ll, ll> > G[100010];
ll visited[100010];
ll dp[100010][2];

void BFS(ll k)
{
	ll max1=0, max2=0;
	for(auto next:G[k])
	{
		if(visited[next.first]==0)
		{
			visited[next.first]=1;
			BFS(next.first);
			dp[k][0]=max(dp[k][0], dp[next.first][0]);
			dp[k][1]=max(dp[k][1], dp[next.first][1]+next.second);
			if(max1<dp[next.first][1]+next.second)
			{
				max2=max1;
				max1=dp[next.first][1]+next.second;
			}
			else if(max2<dp[next.first][1]+next.second)
			{
				max2=dp[next.first][1]+next.second;
			}
		}
	}
	dp[k][0]=max(dp[k][0], max1+max2);
}

int main()
{
	scanf("%lld", &n);
	for(int i=1;i<n;i++)
	{
		scanf("%lld%lld%lld", &a, &v, &d);
		G[a].push_back({v, d});
		G[v].push_back({a, d});
	}
	visited[1]=1;
	BFS(1);
	printf("%lld", max(dp[1][0], dp[1][1]));
}