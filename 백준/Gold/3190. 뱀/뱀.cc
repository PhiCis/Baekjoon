#include<bits/stdc++.h>
using namespace std;

int n, k, x, y, l, c;
char b;
int a[110][110];
int d[5][2]={0, 0, 0, 1, 1, 0, 0, -1, -1, 0};
int sx, sy, ex, ey;
queue<pair<int, char> > q;
int cnt;

int main()
{
	scanf("%d%d", &n, &k);
	a[1][1]=1;
	sx=ex=ey=sy=1;
	for(int i=1;i<=k;i++)
	{
		scanf("%d%d", &x, &y);
		a[x][y]=-1;
	}
	scanf("%d", &l);
	for(int i=1;i<=l;i++)
	{
		scanf("%d %c", &c, &b);
		q.push({c, b});
	}
	while(1)
	{
		cnt++;
		int nx=sx+d[a[sx][sy]][0];
		int ny=sy+d[a[sx][sy]][1];
		if(nx<=0||nx>n||ny<=0||ny>n||a[nx][ny]>0) break;
		int tmp=a[nx][ny];
		a[nx][ny]=a[sx][sy];
		sx=nx, sy=ny;
		if(tmp!=-1)
		{
			int nx=ex+d[a[ex][ey]][0];
			int ny=ey+d[a[ex][ey]][1];
			a[ex][ey]=0;
			ex=nx, ey=ny;
		}
		if(q.front().first==cnt)
		{
			if(q.front().second=='D')
			{
				a[sx][sy]++;
				if(a[sx][sy]>4) a[sx][sy]-=4;
			}
			if(q.front().second=='L')
			{
				a[sx][sy]--;
				if(a[sx][sy]<=0) a[sx][sy]+=4;
			}
			q.pop();
		}
//		printf("%d\n", cnt);
//		for(int i=1;i<=n;i++)
//		{
//			for(int j=1;j<=n;j++)
//			{
//				printf("%2d", a[i][j]);
//			}
//			printf("\n");
//		}
	}
	printf("%d", cnt);
}