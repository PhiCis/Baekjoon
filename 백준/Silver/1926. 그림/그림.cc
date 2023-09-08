#include<bits/stdc++.h>
using namespace std;

int n, m;
int a[550][550];
int c[550][550];
int d[4][2]={1, 0, 0, 1, -1, 0, 0, -1};
queue<pair<int, int> > q;
int ans, ans2;

int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			int tmp=0;
			if(c[i][j]||a[i][j]==0) continue;
			c[i][j]=1;
			q.push({i, j});
			while(!q.empty())
			{
				pair<int, int> now=q.front();
				tmp++;
				q.pop();
				for(int k=0;k<4;k++)
				{
					pair<int, int> next={now.first+d[k][0], now.second+d[k][1]};
					if(next.first>=1&&next.first<=n)
					{
						if(next.second>=1&&next.second<=m)
						{
							if(a[next.first][next.second]==a[now.first][now.second]&&c[next.first][next.second]==0)
							{
								c[next.first][next.second]=1;
								q.push(next);
							}
						}
					}
				}
			}
			ans=max(ans, tmp);
			ans2++;
		}
	}
	cout<<ans2<<"\n"<<ans;
}