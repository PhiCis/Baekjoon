#include<bits/stdc++.h>
using namespace std;

int n, a[110][110], dp[110][110];
int d[4][2]={0, 1, 1, 0, 0, -1, -1, 0};
int ans=2e9;
vector<vector<pair<int ,int> > > V;

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]==0||dp[i][j]==1) continue;
			dp[i][j]=1;
			vector<pair<int, int> > v;
			v.push_back({i, j});
			queue<pair<int ,int> > q;
			q.push({i, j});
			while(!q.empty())
			{
				pair<int, int> now = q.front();
				q.pop();
				for(int i=0;i<4;i++)
				{
					pair<int, int> next = {now.first+d[i][0], now.second+d[i][1]};
					if(next.first<=0||next.second<=0||next.first>n||next.second>n) continue;
					if(a[next.first][next.second]==0||dp[next.first][next.second]==1) continue;
					dp[next.first][next.second]=1;
					v.push_back(next);
					q.push(next);
				}
			}
			V.push_back(v);
		}
	}
	for(int i=0;i<V.size();i++)
	{
		for(int j=i+1;j<V.size();j++)
		{
			for(int k=0;k<V[i].size();k++)
			{
				for(int l=0;l<V[j].size();l++)
				{
					ans = min(ans, abs(V[i][k].first-V[j][l].first)+abs(V[i][k].second-V[j][l].second)-1);
				}
			}
		}
	}
	printf("%d\n", ans);
}