#include<bits/stdc++.h>
using namespace std;
#define INF 2000000000

int N, M, a[1010][1010], c1[1010][1010], c2[1010][1010], d1[1010][1010], d2[1010][1010];
queue<pair<int, int> > q1, q2;
int dx[4]={0, 0, 1, -1};
int dy[4]={1, -1, 0, 0};
int ans;

int main()
{
	scanf("%d%d", &N, &M);
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=M;j++)
		{
			scanf("%1d", &a[i][j]);
		}
	}
	
	for(int i=0;i<=N+1;i++)
	{
		for(int j=0;j<=M+1;j++)
		{
			d1[i][j]=d2[i][j]=INF;
		}
	}
	for(int i=0;i<=N+1;i++)
	{
		a[i][0]=a[i][M+1]=1;
	}
	for(int j=0;j<=M+1;j++)
	{
		a[0][j]=a[N+1][j]=1;
	}
	
	q1.push({1, 1});
	c1[1][1]=1;
	d1[1][1]=1;
	while(!q1.empty())
	{
		int x=q1.front().first;
		int y=q1.front().second;
		q1.pop();
		for(int i=0;i<4;i++)
		{
			if(c1[x+dx[i]][y+dy[i]]==0&&a[x+dx[i]][y+dy[i]]==0)
			{
				c1[x+dx[i]][y+dy[i]]=1;
				d1[x+dx[i]][y+dy[i]]=d1[x][y]+1;
				q1.push({x+dx[i], y+dy[i]});
			}
		}
	}
	
	q2.push({N, M});
	c2[N][M]=1;
	d2[N][M]=1;
	while(!q2.empty())
	{
		int x=q2.front().first;
		int y=q2.front().second;
		q2.pop();
		for(int i=0;i<4;i++)
		{
			if(c2[x+dx[i]][y+dy[i]]==0&&a[x+dx[i]][y+dy[i]]==0)
			{
				c2[x+dx[i]][y+dy[i]]=1;
				d2[x+dx[i]][y+dy[i]]=d2[x][y]+1;
				q2.push({x+dx[i], y+dy[i]});
			}
		}
	}
	
	ans=d1[N][M];
	
	
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=M;j++)
		{
			if(a[i][j]==0) continue;
			int m1=min(min(d1[i-1][j], d1[i+1][j]), min(d1[i][j-1], d1[i][j+1]));
			int m2=min(min(d2[i-1][j], d2[i+1][j]), min(d2[i][j-1], d2[i][j+1]));
			if(m1==INF||m2==INF) continue;
			ans=min(ans, m1+m2+1);
		}
	}
	printf("%d", ans==INF?-1:ans);
}