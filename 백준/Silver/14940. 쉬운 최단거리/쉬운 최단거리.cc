#include<bits/stdc++.h>
using namespace std;
int n, m, a[1010][1010], x, y, c[1010][1010];
int d[4][2]={-1, 0, 0, -1, 1, 0, 0, 1};
int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>a[i][j];
			if(a[i][j]==2)
			{
				x=i, y=j;
			}
		}
	}
	queue<pair<int, int> > q;
	q.push({x, y});
	c[x][y]=0;
	while(!q.empty())
	{
		pair<int, int> now=q.front();
		q.pop();
		for(int i=0;i<4;i++)
		{
			if(1<=now.first+d[i][0] && now.first+d[i][0]<=n && 1<=now.second+d[i][1] && now.second+d[i][1]<=m
			&& a[now.first+d[i][0]][now.second+d[i][1]]==1 && c[now.first+d[i][0]][now.second+d[i][1]]==0)
			{
				c[now.first+d[i][0]][now.second+d[i][1]]=c[now.first][now.second]+1;
				q.push({now.first+d[i][0], now.second+d[i][1]});
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(c[i][j]==0)
			{
				if(a[i][j]==1) cout<<-1<<" ";
				else cout<<0<<" ";
			}
			else
			{
				cout<<c[i][j]<<" ";
			}
		}
		cout<<"\n";
	}
}