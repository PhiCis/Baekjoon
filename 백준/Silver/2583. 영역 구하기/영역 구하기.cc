#include<stdio.h>
#include<algorithm>
int M, N, K;
int MAP[110][110];
int d[4][2]={0, 1, 1, 0, 0, -1, -1, 0};
int visited[110][110];
int x1, x2, y1, y2;
int pnt, ans[10010];

int DFS(int i, int j)
{
	int res=1;
	visited[i][j]=1;
	for(int k=0;k<4;k++)
	{
		if(i+d[k][0]>=1&&i+d[k][0]<=N&&j+d[k][1]>=1&&j+d[k][1]<=M)
		{
			if(MAP[i+d[k][0]][j+d[k][1]]||visited[i+d[k][0]][j+d[k][1]]) continue;
			res+=DFS(i+d[k][0], j+d[k][1]);
		}
	}
	return res;
}

int main()
{
	scanf("%d%d%d", &M, &N, &K);
	for(int i=1;i<=K;i++)
	{
		scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
		for(int j=x1+1;j<=x2;j++)
		{
			for(int k=y1+1;k<=y2;k++)
			{
				MAP[j][k]=1;
			}
		}
	}
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=M;j++)
		{
			if(MAP[i][j]||visited[i][j]) continue;
			pnt++;
			ans[pnt]=DFS(i, j);
		}
	}
	printf("%d\n", pnt);
	std::sort(ans+1, ans+1+pnt);
	for(int i=1;i<=pnt;i++)
	{
		printf("%d ", ans[i]);
	}
}
