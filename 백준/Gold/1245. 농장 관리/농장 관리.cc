#include<bits/stdc++.h>
using namespace std;

int n, m;
int a[110][110];
int c[110][110];
int d[8][2]={-1, -1, -1, 0, -1, 1, 0, -1, 0, 1, 1, -1, 1, 0, 1, 1};
int ans;
queue<pair<int, int> > q;

int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin>>a[i][j];
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
		{
			if(c[i][j]) continue;
			c[i][j]=1;
			q.push({i, j});
			bool flag=false;
			while(!q.empty())
			{
				pair<int, int> now=q.front();
				q.pop();
				for(int k=0;k<8;k++)
				{
					pair<int, int> next={now.first+d[k][0], now.second+d[k][1]};
					if(next.first>=1&&next.first<=n)
					{
						if(next.second>=1&&next.second<=m)
						{
							if(a[next.first][next.second]>a[now.first][now.second])
							{
								flag=true;
								continue;
							}
							if(a[next.first][next.second]==a[now.first][now.second]&&c[next.first][next.second]==0)
							{
								c[next.first][next.second]=1;
								q.push(next);
							}
						}
					}
				}
			}
			if(!flag) ans++;
		}
	
	cout<<ans;
}