#include<bits/stdc++.h>
using namespace std;

int x, y, n;
int a[1210][1210];
int c[1210][1210];
int d[4][2]={1, 0, 0, 1, -1, 0, 0, -1};
queue<pair<int, int> > q;

int main()
{
	cin>>x>>y>>n;
	x+=600;
	y+=600;
	for(int i=1;i<=n;i++)
	{
		int x1, y1;
		cin>>x1>>y1;
		a[x1+600][y1+600]=-1;
	}
	c[600][600]=1;
	q.push({600, 600});
	while(!q.empty())
	{
		pair<int, int> now=q.front();
		if(now.first==x&&now.second==y)
		{
			cout<<c[x][y]-1;
			return 0;
		}
		q.pop();
//		printf("%d %d\n", now.first, now.second);
		for(int k=0;k<4;k++)
		{
			pair<int, int> next={now.first+d[k][0], now.second+d[k][1]};
			if(next.first>=0&&next.first<=1200)
			{
				if(next.second>=0&&next.second<=1200)
				{
					if(a[next.first][next.second]==0&&c[next.first][next.second]==0)
					{
						c[next.first][next.second]=c[now.first][now.second]+1;
						q.push(next);
					}
				}
			}
		}
	}
}