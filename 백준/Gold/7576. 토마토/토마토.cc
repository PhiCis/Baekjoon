#include<bits/stdc++.h>
using namespace std;
queue<pair<int, int> > q;
int n, m;
int a[1100][1100], c[1100][1100];
int cnt;
int main()
{
	scanf("%d%d", &m, &n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			scanf("%d", &a[i][j]);
			if(a[i][j]==1)
			{
				cnt=1;
				c[i][j]=cnt;
				q.push(make_pair(i, j));
			}
		}
	}
	for(int i=0;i<=n+1;i++)
	{
		a[i][0]=a[i][m+1]=-1;
	}
	for(int j=0;j<=m+1;j++)
	{
		a[0][j]=a[n+1][j]=-1;
	}
	while(!q.empty())
	{
		int pi, pj;
		pi=(q.front()).first;
		pj=(q.front()).second;
		//printf("%d\n", q.size());
		q.pop();
		if(a[pi][pj+1]==0&&c[pi][pj+1]==0)
		{
			a[pi][pj+1]=1;
			if(c[pi][pj]==cnt) cnt++;
			c[pi][pj+1]=c[pi][pj]+1;
			q.push(make_pair(pi, pj+1));
		}
		if(a[pi][pj-1]==0&&c[pi][pj-1]==0)
		{
			a[pi][pj-1]=1;
			if(c[pi][pj]==cnt) cnt++;
			c[pi][pj-1]=c[pi][pj]+1;
			q.push(make_pair(pi, pj-1));
		}
		if(a[pi+1][pj]==0&&c[pi+1][pj]==0)
		{
			a[pi+1][pj]=1;
			if(c[pi][pj]==cnt) cnt++;
			c[pi+1][pj]=c[pi][pj]+1;
			q.push(make_pair(pi+1, pj));
		}
		if(a[pi-1][pj]==0&&c[pi-1][pj]==0)
		{
			a[pi-1][pj]=1;
			if(c[pi][pj]==cnt) cnt++;
			c[pi-1][pj]=c[pi][pj]+1;
			q.push(make_pair(pi-1, pj));
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			//printf("%d ", a[i][j]);
			if(a[i][j]==0)
			{
				printf("-1");
				return 0;
			}
		}
		//printf("\n");
	}
	printf("%d", cnt-1);
	return 0;
}