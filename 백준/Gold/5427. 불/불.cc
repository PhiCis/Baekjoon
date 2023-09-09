#include<bits/stdc++.h>
using namespace std;

int t, n, m;
char a[1010][1010];
int dp[1010][1010];
int d[4][2]={-1, 0, 0, -1, 1, 0, 0, 1};

int main()
{
	scanf("%d", &t);
	while(t--)
	{
		queue<pair<int, int> > q;
		scanf("%d%d", &m, &n);
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				scanf(" %c", &a[i][j]);
				dp[i][j]=0;
				if(a[i][j]=='@')
				{
					dp[i][j]=1;
					q.push({i, j});
				}
			}
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				if(a[i][j]=='*')
				{
					dp[i][j]=-1;
					q.push({i, j});
				}
			}
		}
		while(!q.empty())
		{
			pair<int, int> now = q.front();
			q.pop();
			if(dp[now.first][now.second]!=-1 && (now.first==1||now.second==1||now.first==n||now.second==m))
			{
				printf("%d\n", dp[now.first][now.second]);
				goto skip;
			}
			if(dp[now.first][now.second]==-1)
			{
				for(int i=0;i<4;i++)
				{
					pair<int, int> next = {now.first+d[i][0], now.second+d[i][1]};
					if(next.first<=0||next.second<=0||next.first>n||next.second>m) continue;
					if(dp[next.first][next.second]==-1||a[next.first][next.second]=='#') continue;
					dp[next.first][next.second]=-1;
					q.push(next);
				}
			}
			else
			{
				for(int i=0;i<4;i++)
				{
					pair<int, int> next = {now.first+d[i][0], now.second+d[i][1]};
					if(next.first<=0||next.second<=0||next.first>n||next.second>m) continue;
					if(dp[next.first][next.second]!=0||a[next.first][next.second]=='#') continue;
					dp[next.first][next.second]=dp[now.first][now.second]+1;
					q.push(next);
				}
			}
		}
		printf("IMPOSSIBLE\n");
		skip:;
	}
}